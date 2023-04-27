using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineCave : MonoBehaviour
{
    bool incave;
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {
            if (!incave)
            {
                CameraController.instance.minHeight = -13.2f;
                incave = true;
            }
            else
            {
                CameraController.instance.minHeight = -0.5f;
                incave = false;
            }
        }
        
    }
    
}
