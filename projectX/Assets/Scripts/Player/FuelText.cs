using UnityEngine.UI;
using UnityEngine;
public class FuelText : MonoBehaviour
{
    [SerializeField] private Transform point;
    [SerializeField] private float speed;
    [SerializeField] private float countLimit;

    private float timeCount;

    void Start()
    {
        timeCount = 0;
        gameObject.SetActive(false);
    }
    void Update()
    {
        transform.Translate(Vector2.up * speed * Time.deltaTime);

        timeCount += Time.deltaTime;

        if (timeCount >= countLimit)
        {
            timeCount = 0;
            gameObject.transform.position = point.position;
            gameObject.SetActive(false);
        }
    }
}

/*
ESSE C�DIGO S� � CHAMADO QUANDO O OBJETO ESTIVER ATIVO EM CENA
 */