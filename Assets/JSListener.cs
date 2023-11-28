using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JSListener : MonoBehaviour
{
    NativeTest _nativeTest;

    private void Awake()
    {
        _nativeTest = FindObjectOfType<NativeTest>();
    }

    public void OnOfferReceived(string offer)
    {
        _nativeTest.OnOfferReceivedFromListener(offer);
    }


    public void OnAnswerReceived(string sdp)
    {
        _nativeTest.OnAnswerReceivedFromListener(sdp);
    }

    public void OnCandidateReceived(string candidate)
    {
        Debug.Log("OnCandidateReceived = " + candidate);
        _nativeTest.OnCandidateReceivedFromListener(candidate);
    }
}

