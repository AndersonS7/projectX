using System.Collections.Generic;

[System.Serializable]
public class GameData
{
    public List<int> listTeste;

    public GameData(ButtonControl data)
    {
        listTeste = new List<int>();
        foreach (var item in data.listNumAux)
        {
            listTeste.Add(item);
        }
    }
}
