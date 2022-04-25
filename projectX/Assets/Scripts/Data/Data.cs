using UnityEngine;

[CreateAssetMenu(fileName ="new Data", menuName ="Data/New Data")]
public class Data : ScriptableObject
{
    public string title;
    public string statusClass;
    public string description;
    public Sprite image;
}
