mergeInto(LibraryManager.library, {   

  InitPeerConnection: function (clientID) 
  {
		peerConnection = new RTCPeerConnection
		(
			{
				iceServers: 
				[
				  {
					urls: "stun:stun2.l.google.com:19302"
				  }
				]
			}
		);

		peerConnection.onicecandidate = function (Candidate) 
		{ 
			if(Candidate.candidate != null)
			{
				console.log("Candidate.candidate = "+JSON.stringify(Candidate.candidate));
				peerConnection.addIceCandidate(Candidate.candidate);
				SendMessage('JSListener', 'OnCandidateReceived', JSON.stringify(Candidate.candidate))
			}
		}
	  

		peerConnection.oniceconnectionstatechange = (ev) => 
		{
			console.log("iceConnectionState = "+peerConnection.iceConnectionState);
		};
		
		if(clientID == 1)
		{
			dataChannel = peerConnection.createDataChannel("TestChannel");

			dataChannel.addEventListener("open", (event) => {
			console.log("TestChannel");
			dataChannel.send("Hello From clientID = "+clientID);
			});
		}
		else {
		
			peerConnection.ondatachannel = (ev) => 
			{
			  receiveChannel = ev.channel;
			  receiveChannel.onmessage = (message) => {
			  
			  console.log("Message = "+message.data);
			  };
			};
		
		}
	  
  },
  
  
  CreateOffer: function()
  {
	  peerConnection.createOffer().then(function(offer)
	  {
	  console.log("### setLocalDescription Offer");
	   peerConnection.setLocalDescription(offer).then (function ()
	   {
		SendMessage('JSListener', 'OnOfferReceived', offer.sdp)
	   });
	   
	  })
  },

   OnOfferReceived: function (offerSDP)
  {

	  console.log("### setRemoteDescription Offer");

	peerConnection.setRemoteDescription
	(
	    { type: 'offer', sdp: UTF8ToString(offerSDP) }
		
	).then(function() 
		{
			peerConnection.createAnswer().then(function(answer) 
			{
				  console.log("### setLocalDescription Answer");

				peerConnection.setLocalDescription(answer).then(function() 
				{
						SendMessage('JSListener', 'OnAnswerReceived', answer.sdp)
				})
			})
		})

  },
  
  OnAnswerReceived: function (offerSDP)
  {
	console.log("### setRemoteDescription Answer");

	peerConnection.setRemoteDescription
	(
		{ type: 'answer', sdp: UTF8ToString(offerSDP) }
	)

  },

  OnCandidateReceived: function (_candidate, _sdpMid, _sdpMLineIndex)
  {
	console.log("### OnCandidateReceived Added");
	peerConnection.addIceCandidate( {candidate: UTF8ToString(_candidate), sdpMid: UTF8ToString(_sdpMid), sdpMLineIndex: _sdpMLineIndex});
  }


});