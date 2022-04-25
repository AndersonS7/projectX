using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonControl : MonoBehaviour
{
    [SerializeField] private List<Button> btnList;

    private bool finish;

    void Start()
    {
        finish = true;
    }


    void Update()
    {
        if (finish)
        {
            btnList.Remove(btnList[1]);
            for (int i = 0; i < btnList.Count; i++)
            {
                btnList[i].enabled = false;

                if (!btnList[i].enabled)
                {
                    btnList[i].GetComponentInChildren<Text>().text = "XXX";
                }
            }
            finish = false;
        }
    }
}
