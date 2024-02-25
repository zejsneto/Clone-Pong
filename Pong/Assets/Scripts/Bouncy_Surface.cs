using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Bouncy_Surface : MonoBehaviour
{
    public float bounce_Strength;

    public AudioSource source;
    public AudioClip clip;

    private void OnCollisionEnter2D(Collision2D collision)
    {
        Ball ball = collision.gameObject.GetComponent<Ball>();

        // Check if the ball has collided with something
        // Apply a force to the ball in the opposite direction of the normal
        if (ball != null)
        {
            Vector2 normal = collision.GetContact(0).normal;
            ball.AddForce(-normal * this.bounce_Strength);

            // Check if the game is unmuted
            if (IsGameUnmuted())
            {
                source.PlayOneShot(clip);
            }
        }
    }

    // Function to check if the game is unmuted
    private bool IsGameUnmuted()
    {
        // Use PlayerPrefs to get the mute/unmute status
        // If the key "MuteStatus" doesn't exist, return true (unmuted) by default
        return PlayerPrefs.GetInt("MuteStatus", 1) == 1;
    }
}