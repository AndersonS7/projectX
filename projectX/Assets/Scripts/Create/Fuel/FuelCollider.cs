using UnityEngine;
public class FuelCollider : MonoBehaviour
{
    private Player player;
    void Start()
    {
        player = FindObjectOfType<Player>();
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            int fuel = Random.Range(5, 10);
            player.AddFuel(fuel);
            Destroy(gameObject);
        }

        if (collision.CompareTag("End"))
        {
            Destroy(gameObject);
        }
    }
}
