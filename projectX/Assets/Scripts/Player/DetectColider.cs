using UnityEngine;

public class DetectColider : MonoBehaviour
{
    [SerializeField] GameObject panelGameOver;
    [SerializeField] LayerMask layerWall;
    [SerializeField] float radius;

    int ghost; //guarda os items que já foram sorteados
    void Awake()
    {
        //radius = (gameObject.transform.localScale.x / 2);
        panelGameOver.SetActive(false);
    }
    void Update()
    {
        Detect();
    }
    private void Detect()
    {
        Collider2D hit = Physics2D.OverlapCircle(transform.position, radius, layerWall);

        if (hit != null)
        {
            int aux1 = PlayerPrefs.GetInt("totalItens");
            int aux2 = PlayerPrefs.GetInt("ghostItems");
            ghost = aux1 + aux2;

            PlayerPrefs.SetInt("ghostItems", ghost);
            PlayerPrefs.Save();

            panelGameOver.SetActive(true);
            Time.timeScale = 0;
            Destroy(gameObject);
        }
    }
    private void OnDrawGizmosSelected()
    {
        Gizmos.DrawWireSphere(transform.position, radius);
    }
}
