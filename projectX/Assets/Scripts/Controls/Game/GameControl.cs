using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GameControl : MonoBehaviour
{
    [SerializeField] private Text countProgressTxt;
    [SerializeField] private Image barProgressItems;

    private float currentBarItems;
    private float totalBarItems;
    private int countProgress;
    private float timeCount;

    private FeedBackControl feedback;

    void Start()
    {
        //PlayerPrefs.DeleteAll();//path => C:\Users\ander\AppData\LocalLow\DefaultCompany\projectX
        PlayerPrefs.SetInt("totalItens", 0);
        PlayerPrefs.SetInt("number", 0);
        PlayerPrefs.Save();

        totalBarItems = 5;
        barProgressItems.fillAmount = 0;
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
        if (currentBarItems == totalBarItems)
        {
            PlayerPrefs.SetInt("number", 1);
            PlayerPrefs.SetInt("totalItens", 1);
            PlayerPrefs.Save();

            feedback.isActive = true;

            currentBarItems = 0;
            barProgressItems.fillAmount = 0;
        }
    }

    private void Progress()
    {
        timeCount += Time.deltaTime;

        if (timeCount >= 2)
        {
            //barra de progreço para liberar item
            currentBarItems++;
            barProgressItems.fillAmount = currentBarItems / totalBarItems;

            //contador txt
            countProgress++;
            countProgressTxt.text = countProgress.ToString();
            timeCount = 0;
        }
    }
}
