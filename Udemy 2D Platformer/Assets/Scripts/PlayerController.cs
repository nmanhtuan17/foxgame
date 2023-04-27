using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public static PlayerController instance;
    
    [Header("Moving")]
    public float moveSpeed;
    public Rigidbody2D theRB;
    public float jumpForce;
    private bool canDoubleJump;

    private bool isGrounded;
    public Transform groundCheckPoint;
    public LayerMask whatIsGround;

    [Header("Dash")]
    private bool isDashing;
    private float currentSpeed;
    private float dashTimeLeft;
    public float dashTime;
    public float dashSpeed;
    public float dashCouter;
    public float distanceBWTImage;
    public float lastImageXpos;
    private float lastDash = -100f;

    [Header("Animation")]
    private Animator anim;
    private SpriteRenderer theSR;

    [Header("KnockBack")]
    public float knockBackLength, knockBackForce;
    private float knockBackCounter;

    public float bounceForce;

    public bool stopInput;

    private void Awake()
    {
        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        theSR = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!PauseMenu.instance.isPaused && !stopInput)
        {
            if (knockBackCounter <= 0)
            {

                theRB.velocity = new Vector2(moveSpeed * Input.GetAxis("Horizontal"), theRB.velocity.y);

                isGrounded = Physics2D.OverlapCircle(groundCheckPoint.position, .2f, whatIsGround);

                if (isGrounded)
                {
                    canDoubleJump = true;
                }

                if (Input.GetButtonDown("Jump"))
                {
                    if (isGrounded)
                    {
                        theRB.velocity = new Vector2(theRB.velocity.x, jumpForce);
                        AudioManager.instance.PlaySFX(10);
                    }
                    else
                    {
                        if (canDoubleJump)
                        {
                            theRB.velocity = new Vector2(theRB.velocity.x, jumpForce);
                            canDoubleJump = false;
                            AudioManager.instance.PlaySFX(10);
                        }
                    }
                }

                if (theRB.velocity.x < 0)
                {
                    theSR.flipX = true;
                }
                else if (theRB.velocity.x > 0)
                {
                    theSR.flipX = false;
                }
            }
            else
            {
                knockBackCounter -= Time.deltaTime;
                if (!theSR.flipX)
                {
                    theRB.velocity = new Vector2(-knockBackForce, theRB.velocity.y);
                }
                else
                {
                    theRB.velocity = new Vector2(knockBackForce, theRB.velocity.y);
                }
            }
            if (Input.GetButtonDown("Dash") && !isGrounded)
            {
                if(Time.time >= (lastDash + dashCouter))
                {
                    AttemptToDash();
                    AudioManager.instance.PlaySFX(12);
                    UIController.instance.DashImage.fillAmount = 0;
                    UIController.instance.isCoolDown = true;
                }
                
            }
            checkDash();
        }
        
        anim.SetFloat("moveSpeed", Mathf.Abs( theRB.velocity.x));
        anim.SetBool("isGrounded", isGrounded);
    }

    public void KnockBack()
    {
        knockBackCounter = knockBackLength;
        theRB.velocity = new Vector2(0f, knockBackForce);

        anim.SetTrigger("hurt");
    }

    public void Bounce()
    {
        theRB.velocity = new Vector2(theRB.velocity.x, bounceForce);
        AudioManager.instance.PlaySFX(10);
    }
    
    public void AttemptToDash()
    {
        isDashing = true;
        dashTimeLeft = dashTime;
        lastDash = Time.time;
        PlayerImagePool.instance.GetFromPool();
        lastImageXpos = transform.position.x;

    }
    void checkDash()
    {
        
        if (isDashing)
        {
            if(dashTimeLeft > 0f)
            {
                theRB.velocity = new Vector2(dashSpeed * Input.GetAxis("Horizontal"), theRB.velocity.y);
                dashTimeLeft -= Time.deltaTime;
                if ((transform.position.x - lastImageXpos) > distanceBWTImage)
                {
                    PlayerImagePool.instance.GetFromPool();
                    lastImageXpos = transform.position.x;
                }
                else if((lastImageXpos - transform.position.x) > distanceBWTImage)
                {
                    PlayerImagePool.instance.GetFromPool();
                    lastImageXpos = transform.position.x;
                }
            }
            else
            {
                isDashing = false;
            }

        }
    }
}


