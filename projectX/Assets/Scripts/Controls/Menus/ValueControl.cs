using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ValueControl : MonoBehaviour
{
    void Start()
    {
        //assim se o jogador sair do menu para o aumanac, n�o ser� sorteado um n�mero
        PlayerPrefs.SetInt("number", 0);
        PlayerPrefs.Save();
    }
}
