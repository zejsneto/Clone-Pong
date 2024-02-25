using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bot_Paddle : Paddle
{
    public Rigidbody2D ball;

    private void FixedUpdate()
    {
        // Check if ball is coming towards bot paddle
        if(this.ball.velocity.x > 0.0f)
        {
            if(this.ball.position.y > this.transform.position.y) 
            {
                _rigidbody.AddForce(Vector2.up * this.speed);
            } else if(this.ball.position.y < this.transform.position.y)
            {
                _rigidbody.AddForce(Vector2.down * this.speed);
            }
        }
        // If not, go back to middle position
        else
        {
            if (this.transform.position.y > 0.0f)
            {
                _rigidbody.AddForce(Vector2.down * this.speed);
            } else if (this.transform.position.y < 0.0f)
            {
                _rigidbody.AddForce(Vector2.up * this.speed);
            }
        }
    }
}
