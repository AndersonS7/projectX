using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncrementItemsUnlock : MonoBehaviour
{

    private int incrementItems;

    void Start()
    {
        incrementItems = 0;
    }

    // Update is called once per frame
    void Update()
    {
        IncrementItems();
    }

    private void IncrementItems()
    {
        incrementItems++;
        PlayerPrefs.SetInt("totalItens", incrementItems);
        PlayerPrefs.SetInt("number", 1);
        PlayerPrefs.Save();

        Debug.Log(incrementItems);
        gameObject.SetActive(false);
    }
}
