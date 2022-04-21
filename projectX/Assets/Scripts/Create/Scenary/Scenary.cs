using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scenary : MonoBehaviour
{
    [SerializeField] GameObject wall;
    [SerializeField] List<Transform> points;
    [SerializeField] float timeCountLimit;

    private float timeCount;

    void Start()
    {
        CreateWall(points);
    }

    void Update()
    {
        timeCount += Time.deltaTime;
        if (timeCount >= timeCountLimit)
        {
            CreateWall(points);
            timeCount = 0;
        }
    }

    private void CreateWall(List<Transform> points)
    {
        int index = Random.Range(0, points.Count);
        Instantiate(wall, points[index].position, Quaternion.identity);
    }
}
