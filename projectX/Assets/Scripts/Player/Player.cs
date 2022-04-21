using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeReference] private float forceJump;
    private bool isJump;
    private Rigidbody2D rig;

    void Awake()
    {
        rig = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        Inputs();
    }

    void FixedUpdate()
    {
        Jump();
    }

    private void Inputs()
    {
        if (Input.GetMouseButton(0))
        {
            isJump = true;
        }
        if (Input.GetMouseButtonUp(0))
        {
            isJump = false;
        }
    }
    private void Jump()
    {
        if (isJump)
        {
            rig.AddForce(Vector2.up * forceJump * Time.fixedDeltaTime, ForceMode2D.Impulse);
        }
    }
}
