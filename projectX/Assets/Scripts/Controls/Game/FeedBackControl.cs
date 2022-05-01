using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class FeedBackControl : MonoBehaviour
{
    [SerializeField] GameObject feedbackTxt;

    private float timeCount;

    [HideInInspector] public bool isActive;
    [HideInInspector] public string statusItem;

    void Start()
    {
        timeCount = 0;
        isActive = false;
        feedbackTxt.gameObject.SetActive(false);
    }

    void Update()
    {
        Action();
    }

    private void Action()
    {
        if (isActive)
        {
            timeCount += Time.deltaTime;
            feedbackTxt.GetComponent<Text>().text = $"Item ({statusItem}) desbloqueado!";
            feedbackTxt.gameObject.SetActive(true);

            if (timeCount >= 2.5f)
            {
                isActive = false;
                statusItem = "";
                timeCount = 0;
                feedbackTxt.gameObject.SetActive(false);
            }
        }
    }
}
