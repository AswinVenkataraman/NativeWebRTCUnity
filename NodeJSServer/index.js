const express = require("express");
const { ExpressPeerServer } = require("peer");

const app = express();
var cors = require('cors')
app.use(cors({origin: '*'}));

//app.get("/", (req, res, next) => res.send("Hello world!"));

const server = app.listen(9000);

const peerServer = ExpressPeerServer(server, {
	allow_discovery: "true",
});

app.use("", peerServer);

peerServer.on('connection', (client) => { console.log("Peer Connected") });

