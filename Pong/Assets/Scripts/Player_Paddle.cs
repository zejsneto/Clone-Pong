using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Player_Paddle : Paddle
{
    private Vector2 _direction;

    private void Update()
    {
        // Player controls for single-player mode
        if(SceneManager.GetActiveScene().name == "OnePlayer"){
            if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
            {
                _direction = Vector2.up;
            }
            else if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
            {
                _direction = Vector2.down;
            }
            else
            {
                _direction = Vector2.zero;
            }
        } // Player 1 controls for two-players mode
        else
        {
            if (Input.GetKey(KeyCode.W))
            {
                _direction = Vector2.up;
            }
            else if (Input.GetKey(KeyCode.S))
            {
                _direction = Vector2.down;
            }
            else
            {
                _direction = Vector2.zero;
            }
        }

          
    }

    private void FixedUpdate()
    {
        if(_direction.sqrMagnitude != 0) 
        { 
            _rigidbody.AddForce(_direction * speed);
        }
    }
}