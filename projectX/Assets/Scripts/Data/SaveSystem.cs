using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public static class SaveSystem
{
    public static void SaveGame(ButtonControl value)
    {
        BinaryFormatter binary = new BinaryFormatter();

        string path = Application.persistentDataPath + "/game.aqs";
        FileStream stream = new FileStream(path, FileMode.Create);

        GameData data = new GameData(value);

        binary.Serialize(stream, data);
        stream.Close();
    }

    public static GameData LoadGame()
    {
        string path = Application.persistentDataPath + "/game.aqs";

        if (File.Exists(path))
        {
            BinaryFormatter binary = new BinaryFormatter();
            FileStream stream = new FileStream(path, FileMode.Open);

            GameData data = binary.Deserialize(stream) as GameData;
            stream.Close();

            return data;
        }
        else
        {
            return null;
        }
    }
}
