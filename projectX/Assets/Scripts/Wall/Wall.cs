using UnityEngine;

public class Wall : MonoBehaviour
{
    [SerializeField] float speed;

    void Update()
    {
        ToMove();
    }

    private void ToMove()
    {
        transform.Translate(Vector2.left * speed * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("End"))
        {
            Destroy(gameObject);
        }
    }
}
