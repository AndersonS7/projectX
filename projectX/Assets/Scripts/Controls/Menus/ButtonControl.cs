using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonControl : MonoBehaviour
{
    [SerializeField] private List<Button> btnList;

    private List<int> numList; //guarda os itens que foram sorteados

    public List<int> NumList { get => numList; set => numList = value; }
    public List<Button> BtnList { get => btnList; set => btnList = value; }


    void Start()
    {
        NumList = new List<int>() { };
        NumList.Add(PlayerPrefs.GetInt("index"));

        for (int i = 0; i < BtnList.Count; i++)
        {
            BtnList[i].enabled = false;
        }
    }

    void Update()
    {
        CheckList();
    }

    private void CheckList()
    {
        for (int i = 0; i < NumList.Count; i++)
        {
            //os números dentro de numList não pode ser maior que o tamanho total de btnList (btnList.Count)
            BtnList[NumList[i]].enabled = true;
        }

        for (int i = 0; i < BtnList.Count; i++)
        {
            if (!BtnList[i].enabled)
            {
                BtnList[i].GetComponentInChildren<Text>().text = "X";
            }
        }
    }
}
