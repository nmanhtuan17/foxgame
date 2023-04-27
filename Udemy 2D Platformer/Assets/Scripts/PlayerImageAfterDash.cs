using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerImageAfterDash : MonoBehaviour
{
    public Transform player;
    public SpriteRenderer playerSR;

    private SpriteRenderer theSR;

    public Color color;

    [SerializeField]
    private float activeTime = 0.1f;
    private float timeActived;
    private float alpha;

    [SerializeField]
    private float alphaSet = 0.8f;
    private float alphaMultiplier = 0.85f;

    private void OnEnable()
    {
        theSR = GetComponent<SpriteRenderer>();
        player = GameObject.FindGameObjectWithTag("Player").transform;
        playerSR = player.GetComponent<SpriteRenderer>();

        alpha = alphaSet;
        theSR.sprite = playerSR.sprite;
        transform.position = player.position;
        transform.rotation = player.rotation;
        theSR.flipX = playerSR.flipX;
        timeActived = Time.time;
    }

    private void Update()
    {
        alpha *= alphaMultiplier;
        color = new Color(1f, 1f, 1f, alpha);
        theSR.color = color;

        if(Time.time > (timeActived + activeTime))
        {
            PlayerImagePool.instance.AddToPool(gameObject);
        }
    }
}
