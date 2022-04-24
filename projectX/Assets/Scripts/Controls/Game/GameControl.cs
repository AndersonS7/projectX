using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameControl : MonoBehaviour
{
    [SerializeField] private Text countProgressTxt;

    private int countProgress;
    private float timeCount;

    void Start()
    {
        countProgress = 0;
        timeCount = 0;
    }

    void Update()
    {
        Progress();
    }

    private void Progress()
    {
        timeCount += Time.deltaTime;

        if (timeCount >= 2.5f)
        {
            countProgress++;
            countProgressTxt.text = countProgress.ToString();
            timeCount = 0;
        }
    }
}
