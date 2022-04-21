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
}
