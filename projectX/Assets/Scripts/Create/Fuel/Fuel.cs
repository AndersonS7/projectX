using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fuel : MonoBehaviour
{
    [SerializeField] private List<Transform> points;
    [SerializeField] private GameObject fuelPrefab;
    [SerializeField] private float timeLimit;

    private float timeCount;

    void Start()
    {
        int index = Random.Range(0, points.Count);
        Instantiate(fuelPrefab, points[index].position, Quaternion.identity);
    }

    void Update()
    {
        timeCount += Time.deltaTime;

        if (timeCount >= timeLimit)
        {
            int index = Random.Range(0, points.Count);
            Instantiate(fuelPrefab, points[index].position, Quaternion.identity);
            timeCount = 0;
        }
    }
}
