using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameControl : MonoBehaviour
{
    [SerializeField] private Text countProgressTxt;

    private int countProgress;
    private float timeCount;

    private FeedBackControl feedback;

    void Start()
    {
        //PlayerPrefs.DeleteAll();//path => C:\Users\ander\AppData\LocalLow\DefaultCompany\projectX
        PlayerPrefs.SetInt("number", 0);
        PlayerPrefs.Save();

        feedback = GetComponent<FeedBackControl>();
        countProgress = 0;
        timeCount = 0;
    }

    void Update()
    {
        UnlockObject();
        Progress();
    }

    // quando o player passa de determinado ponto, ele gera um número que é usado bara desbloquear o elemnto
    public void UnlockObject()
    {
        if (countProgress == 2)
        {
            PlayerPrefs.SetInt("number", 1);
            PlayerPrefs.Save();

            feedback.isActive = true;
            feedback.statusItem = "comum";
        }
        if (countProgress == 5)
        {
            feedback.isActive = true;
            feedback.statusItem = "icomum";
        }
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
