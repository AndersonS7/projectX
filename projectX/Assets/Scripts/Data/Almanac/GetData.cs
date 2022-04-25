using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class GetData : MonoBehaviour
{
    [SerializeField] private List<Data> data;

    [SerializeField] private Text title;
    [SerializeField] private Text statusClass;
    [SerializeField] private Text description;
    [SerializeField] private Image image;

    public void UpdateInfo(int index)
    {
        title.text = data[index].title;
        statusClass.text = data[index].statusClass;
        description.text = data[index].description;
        image.sprite = data[index].image;
    }
}
