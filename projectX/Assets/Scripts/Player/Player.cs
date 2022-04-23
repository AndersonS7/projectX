using UnityEngine;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    //player
    [SerializeReference] private float forceJump;
    private bool isJump;
    private Rigidbody2D rig;

    //fuel
    [SerializeField] private Text fuelGetTxt;
    [SerializeField] private Image fuelBar;
    [SerializeField] private float totalFuel;
    [SerializeField] private float decrementValue;

    private float currentFuel;
    void Start()
    {
        currentFuel = totalFuel;
        rig = GetComponent<Rigidbody2D>();
    }
    void Update()
    {
        Inputs();
        DecrementFuel();
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
        if (isJump && currentFuel > 0)
        {
            rig.AddForce(Vector2.up * forceJump * Time.fixedDeltaTime, ForceMode2D.Impulse);
        }
    }
    private void DecrementFuel()
    {
        if (isJump)
        {
            currentFuel -= decrementValue;
            fuelBar.fillAmount = currentFuel / totalFuel;
        }

        if (currentFuel <= 0)
        {
            currentFuel = 0;
        }
    }
    public void AddFuel(int value)
    {
        fuelGetTxt.gameObject.SetActive(true);
        fuelGetTxt.text = $"+{value}";

        if (currentFuel + value < totalFuel)
        {
            currentFuel += value;
        }
        else
        {
            currentFuel = totalFuel;
        }
    }
}
