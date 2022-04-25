using UnityEngine.SceneManagement;
using UnityEngine;

public class MenuControl : MonoBehaviour
{
    [SerializeField] private GameObject panelGameOver; // mudar para passar esse objeto no par�metro da fun��o

    //menu principal
    public void LoadScene(string scene)
    {
        SceneManager.LoadScene(scene);
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    // menus secund�rios
    public void Restart(string scene)
    {
        Time.timeScale = 1;
        panelGameOver.SetActive(false);
        SceneManager.LoadScene(scene);
    }

    public void ActiveInfo(GameObject panelInfo)
    {
        if (!panelInfo.activeSelf)
        {
            int index = PlayerPrefs.GetInt("index");
            panelInfo.GetComponentInChildren<GetData>().UpdateInfo(index);
            panelInfo.SetActive(true);
        }
        else
        {
            panelInfo.SetActive(false);
        }
    }
}
