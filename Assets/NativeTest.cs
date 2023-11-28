using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using NativeWebSocket;


public class NativeTest : MonoBehaviour
{

    private int clientID;
    WebSocket websocket;


    [DllImport("__Internal")]
    private static extern string InitPeerConnection(int clientID);

    [DllImport("__Internal")]
    private static extern string CreateOffer();

    [DllImport("__Internal")]
    private static extern string OnOfferReceived(string sdp);


    [DllImport("__Internal")]
    private static extern string OnAnswerReceived(string sdp);

    [DllImport("__Internal")]
    private static extern string OnCandidateReceived(string candidate, string sdpMid, int sdpMLineIndex);

    void Start()
    {
        InitializeWebSocket();

    }

    async void InitializeWebSocket()
    {
        websocket = new WebSocket("ws://localhost:443");

        websocket.OnOpen += () =>
        {
            Debug.Log("Websocket open ");

        };

        websocket.OnError += (e) =>
        {
            Debug.Log("Error! " + e);
        };

        websocket.OnClose += (e) =>
        {
            Debug.Log("Connection closed!");
        };

        websocket.OnMessage += (bytes) =>
        {
            var message = System.Text.Encoding.UTF8.GetString(bytes);
            if (message.Contains("ClientID"))
            {
                clientID = int.Parse(message.Split(",")[1]);
                Debug.Log("clientID = " + clientID);

                InitPeerConnection(clientID);
            }
            else if (message.Contains("CreateOffer"))
            {
                Debug.Log("CreateOffer ClientID = " + clientID);
                CreateOffer();
            }
            else if (message.Contains("OnOfferReceived"))
            {
                Debug.Log("OnOfferReceived ClientID = " + clientID);
                string val = message.Split(",")[1];
                OnOfferReceived(val);
            }
            else if (message.Contains("OnAnswerReceived"))
            {
                Debug.Log("OnAnswerReceived ClientID = " + clientID);
                string val = message.Split(",")[1];
                Debug.Log("OnAnswerReceived Contents  = " + val);
                OnAnswerReceived(val);
            }
            else if (message.Contains("OnCandidateReceived"))
            {
                Debug.Log("OnCandidateReceived ClientID = " + clientID);
                string candidate = message.Split(",")[1];
                Debug.Log("OnCandidateReceived candidate  = " + candidate);
                string sdpMid = message.Split(",")[2];
                Debug.Log("OnCandidateReceived sdpMid  = " + sdpMid);
                int sdpMLineIndex = int.Parse(message.Split(",")[3]);
                Debug.Log("OnCandidateReceived sdpMLineIndex  = " + sdpMLineIndex);
                OnCandidateReceived(candidate, sdpMid, sdpMLineIndex);
            }

        };

        // waiting for messages
        await websocket.Connect();

    }

    public void OnOfferReceivedFromListener(string offer)
    {
        websocket.SendText("OnOfferReceived:," + offer);
    }

    public void OnAnswerReceivedFromListener(string answer)
    {
        websocket.SendText("OnAnswerReceived:," + answer);

    }

    public void OnCandidateReceivedFromListener(string candidate)
    {
        RTCIceCandidate remoteCandidate = new RTCIceCandidate();
        JsonUtility.FromJsonOverwrite(candidate, remoteCandidate);

        websocket.SendText("OnCandidateReceived:," + remoteCandidate.candidate+ ","+ remoteCandidate.sdpMid + ","+ remoteCandidate.sdpMLineIndex);

    }
}

[System.Serializable]
public class RTCIceCandidate
{
     public string candidate;
     public string sdpMid;
   public int sdpMLineIndex;
}

public enum Type
{
    offer = 0,
    other = 1
}