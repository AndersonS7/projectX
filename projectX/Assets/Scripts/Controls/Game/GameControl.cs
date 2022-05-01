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
        PlayerPrefs.DeleteAll();//path => C:\Users\ander\AppData\LocalLow\DefaultCompany\projectX
        PlayerPrefs.SetInt("number", 0);
        PlayerPrefs.Save();

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
        if (countProgress > 2)
        {
            PlayerPrefs.SetInt("number", 1);
            PlayerPrefs.Save();
        }
    }

    private void Progress()
    {
        timeCount += Time.deltaTime;

        if (timeCount >= 0.5f)
        {
            countProgress++;
            countProgressTxt.text = countProgress.ToString();
            timeCount = 0;
        }
    }
}
