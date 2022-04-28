using UnityEngine;

public class SaveIndex : MonoBehaviour
{
    public void SaveIndexInfo(int index)
    {
        PlayerPrefs.SetInt("index", index);
        PlayerPrefs.Save();
    }
}
