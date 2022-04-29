using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonControl : MonoBehaviour
{
    [SerializeField] private List<Button> btnList;

    public int[] numList; //guarda os itens que foram sorteados

    public int[] NumList { get => numList; set => numList = value; }

    void Start()
    {
        
        if (PlayerPrefs.GetInt("index") > -1)
        {
            
        }
        else
        {
            numList = new int[0];
        }

        for (int i = 0; i < btnList.Count; i++)
        {
            btnList[i].enabled = false;
        }
    }

    void Update()
    {
        CheckList();
    }

    private void CheckList()
    {
        for (int i = 0; i < numList.Length; i++)
        {
            //os números dentro de numList não pode ser maior que o tamanho total de btnList (btnList.Count)
            if (numList[i] <= btnList.Count)
            {
                btnList[numList[i]].enabled = true;
            }
            else
            {
                Debug.Log("número fora do intervalor!");
            }
        }

        for (int i = 0; i < btnList.Count; i++)
        {
            if (!btnList[i].enabled)
            {
                btnList[i].GetComponentInChildren<Text>().text = "X";
            }
        }
    }

    // controle de save
    public void SaveGame()
    {
        SaveSystem.SaveGame(this);
    }

    public void LoadGame()
    {
        GameData data = SaveSystem.LoadGame();

        numList = new int[data.numList.Length];

        for (int i = 0; i < numList.Length; i++)
        {
            numList[i] = data.numList[i];
        }
    }
}
