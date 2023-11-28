const express = require('express')
var cors = require('cors')
var app = express()
app.use(cors({origin: 'http://localhost:56635'}));

const { ExpressPeerServer } = require("peer");

app.get("/", (req, res, next) => res.send("Hello world!"));

app.listen(5000, () => console.log(`Listening on ${5000}`))
 
 
const { WebSocketServer } = require('ws')
const sockserver = new WebSocketServer({ port: 443 })
sockserver.on('connection', ws => 
{
	
 console.log('New client connected!')
 
 var clientCount = 0;
 sockserver.clients.forEach(client => 
 {
	 console.log("client.readyState = "+client.readyState);
	 if (client.readyState == 1)
	 	clientCount++;
 })
 


 var iVal = 1;
 sockserver.clients.forEach(client => 
 {
	 console.log("iVal = "+iVal+ " clientCount = "+clientCount);
	    client.send("ClientID,"+iVal)
		 if(iVal == 1 && clientCount == 2)
			 client.send("CreateOffer")
		 iVal++;
   })
 
 ws.on('close', () => console.log('Client has disconnected!'))
 ws.on('message', data => {
	      console.log(`distributing message: ${data}`)
   sockserver.clients.forEach(client => {
	 if (client != ws)
     client.send(`${data}`)
   })
 })
 ws.onerror = function () {
   console.log('websocket error')
 }
})