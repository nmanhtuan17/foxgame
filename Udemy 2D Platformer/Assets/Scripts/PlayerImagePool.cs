using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerImagePool : MonoBehaviour
{
    public static PlayerImagePool instance;

    [SerializeField] private GameObject afterImagePrefab;

    private Queue<GameObject> availableObjects = new Queue<GameObject>();

    private void Awake()
    {
        instance = this;
        GrowPool();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void GrowPool()
    {
        for(int i = 0; i < 10; i++)
        {
            var instanceToAdd = Instantiate(afterImagePrefab);
            instanceToAdd.transform.SetParent(transform);
            AddToPool(instanceToAdd);
        }
    }

    public void AddToPool(GameObject _instance)
    {
        _instance.SetActive(false);
        availableObjects.Enqueue(_instance);

    }
    public GameObject GetFromPool()
    {
        if(availableObjects.Count == 0)
        {
            GrowPool();
        }
        var instance = availableObjects.Dequeue();
        instance.SetActive(true);
        return instance;
    }
}
