using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonControl : MonoBehaviour
{
    [SerializeField] private List<Button> btnList;

    public List<int> listNumAux = new List<int>();

    void Start()
    {
        LockeInit(); //trava todos os bot�es ao iniciar.
        LockControl(); //controla qual item vai ser liberado.
        UnlockItems(); //destrava os bot�es de acordo com o n�mero selecionado.
    }

    private void LockControl()
    {
        if (PlayerPrefs.GetInt("number") == 1)
        {

            LoadGame();

            if (listNumAux.Count != 0)
            {
                if (listNumAux.Count < btnList.Count)
                {
                    int num = Random.Range(0, btnList.Count);

                    if (listNumAux.Contains(num))
                    {
                        for (int i = 0; listNumAux.Contains(num); i++)
                        {
                            num = Random.Range(0, btnList.Count);
                        }
                        
                        listNumAux.Add(num);
                    }
                    else
                    {
                        listNumAux.Add(num);
                    }

                    SaveGame();
                }
                else
                {
                    Debug.Log("Todos os itens foram desbloqueados");
                }
            }
            else //se for a primeira vez | OK
            {
                int num = Random.Range(0, btnList.Count);
                listNumAux.Add(num);

                SaveGame();
            }
        }
    }
    private void LockeInit()
    {
        //de in�cio vai bloquear todos os bot�es
        for (int i = 0; i < btnList.Count; i++)
        {
            btnList[i].enabled = false;
        }
    }
    private void UnlockItems()
    {
        for (int i = 0; i < listNumAux.Count; i++)
        {
            //os n�meros dentro de numList n�o pode ser maior que o tamanho total de btnList (btnList.Count)
            if (listNumAux[i] <= btnList.Count)
            {
                btnList[listNumAux[i]].enabled = true;
            }
            else
            {
                Debug.Log("n�mero fora do intervalor!");
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

    #region SAVE GAME
    // controle de save
    public void SaveGame()
    {
        SaveSystem.SaveGame(this);
    }

    public void LoadGame()
    {
        GameData data = SaveSystem.LoadGame();

        if (data != null) //s� pega a lista se ela j� tiver sido salva uma vez
        {
            foreach (var item in data.listTeste)
            {
                listNumAux.Add(item);
            }
        }
        else //quando o jogo � iniciado a primeira vez
        {
            Debug.Log("Arquivo n�o encontrado");
        }
    }
    #endregion
}
