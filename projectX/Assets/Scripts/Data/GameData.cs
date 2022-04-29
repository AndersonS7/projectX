
[System.Serializable]
public class GameData
{
    public int[] numList;

    public GameData(ButtonControl value)
    {
        numList = new int[value.NumList.Length];

        for (int i = 0; i < numList.Length; i++)
        {
            numList[i] = value.NumList[i];
        }
    }
}
