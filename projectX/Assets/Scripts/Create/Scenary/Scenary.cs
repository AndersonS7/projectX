using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scenary : MonoBehaviour
{
    [SerializeField] GameObject wall;
    [SerializeField] List<Transform> points;
    [SerializeField] float timeCountLimit;

    private float timeCount;

    public float TimeCountLimit { get => timeCountLimit; set => timeCountLimit = value; }

    void Start()
    {
        CreateWall(points, 2);
    }

    void Update()
    {
        timeCount += Time.deltaTime;
        if (timeCount >= TimeCountLimit)
        {
            CreateWall(points, 2);
            timeCount = 0;
        }
    }

    private void CreateWall(List<Transform> points, int value)
    {
        for (int i = 0; i < value; i++)
        {
            int index = Random.Range(0, points.Count);
            GameObject auxObj = ModifyObj(wall, index, 60);
            Instantiate(auxObj, points[index].position, Quaternion.identity);
        }
    }

    private GameObject ModifyObj(GameObject obj, int index, int percentagem)
    {
        int perc = Random.Range(1, 100);
        int x = Random.Range(2, 3);
        int y = Random.Range(1, 3);

        if (index == 0)
        {
            obj.transform.localScale = new Vector3(x, y, obj.transform.localScale.z);
            return obj;
        }
        else if (index == 1)
        {
            if (perc < percentagem)
            {
                obj.transform.localScale = new Vector3(x, -y, obj.transform.localScale.z);
                return obj;
            }
            else
            {
                obj.transform.localScale = new Vector3(x, y, obj.transform.localScale.z);
                return obj;
            }
        }
        else if (index == 2)
        {
            obj.transform.localScale = new Vector3(x, -y, obj.transform.localScale.z);
            return obj;
        }
        else
        {
            return obj;
        }
    }
}
