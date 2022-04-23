using UnityEngine;

public class DetectColider : MonoBehaviour
{
    [SerializeField] GameObject panelGameOver;
    [SerializeField] LayerMask layerWall;
    [SerializeField] float radius;
    void Awake()
    {
        radius = (gameObject.transform.localScale.x / 2);
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
