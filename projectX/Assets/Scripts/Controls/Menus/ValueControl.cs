using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ValueControl : MonoBehaviour
{
    void Start()
    {
        //assim se o jogador sair do menu para o aumanac, não será sorteado um número
        PlayerPrefs.SetInt("number", 0);
        PlayerPrefs.Save();
    }
}
