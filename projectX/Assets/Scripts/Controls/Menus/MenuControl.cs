using UnityEngine.SceneManagement;
using UnityEngine;

public class MenuControl : MonoBehaviour
{
    [SerializeField] private GameObject panelGameOver;

    public void Restart()
    {
        Time.timeScale = 1;
        panelGameOver.SetActive(false);
        SceneManager.LoadScene("SampleScene");
    }
}
