using UnityEngine;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    //player
    [Header("SETTINGS")]
    [SerializeReference] private float forceJump;
    [SerializeField] private ParticleSystem particleS;
    private bool isJump;
    private Rigidbody2D rig;

    //fuel
    [Header("FUEL")]
    [SerializeField] private Text fuelGetTxt;
    [SerializeField] private Image fuelBar;
    [SerializeField] private float totalFuel;
    [SerializeField] private float decrementValue;

    private float currentFuel;

    void Start()
    {
        particleS.Play();
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
            particleS.Play();
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
            fuelBar.fillAmount = currentFuel / totalFuel;
        }
        else
        {
            currentFuel = totalFuel;
            fuelBar.fillAmount = currentFuel / totalFuel;
        }
    }
}
