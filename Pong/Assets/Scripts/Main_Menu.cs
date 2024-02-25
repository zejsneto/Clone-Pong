using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Main_Menu : MonoBehaviour
{
    public static int numberOfPlayers = 0;

    public Button audioButton;
    public Image buttonImage;
    public Sprite muted;
    public Sprite unMuted;

    int muteStatus;

    // Esc to quit the game
    private void Update()
    {
        /*
        if (Input.GetKey(KeyCode.Escape))
        {
            QuitGame();
        }
        */
    }

    public void OnePlayer()
    {
        SceneManager.LoadSceneAsync("OnePlayer");
        //SceneManager.LoadSceneAsync(3);
        numberOfPlayers = 1;
    }

    public void TwoPlayers()
    {
        SceneManager.LoadSceneAsync("TwoPlayers");
        //SceneManager.LoadSceneAsync(4);
        numberOfPlayers = 2;
    }

    // Restart method used on restart button, go back to the respective play mode
    public void Restart()
    {
        if (numberOfPlayers == 1)
        {
            SceneManager.LoadSceneAsync("OnePlayer");
        }
        else
        {
            SceneManager.LoadSceneAsync("TwoPlayers");
        }
    }

    public void ResolutionMenu()
    {
        SceneManager.LoadSceneAsync("ResolutionMenu");
    }

    public void Menu()
    {
        SceneManager.LoadSceneAsync("MainMenu");
    }

    /*
    public void QuitGame()
    {
        Application.Quit();
    }
    */

    public void Start()
    {
        // Retrieve the mute status from PlayerPrefs
        muteStatus = PlayerPrefs.GetInt("MuteStatus", 1);

        // Set the button image based on the mute status
        buttonImage.sprite = (muteStatus == 1) ? unMuted : muted;
    }

    public void MuteUnmute()
    {
        muteStatus = PlayerPrefs.GetInt("MuteStatus", 1);

        // Toggle mute/unmute status
        muteStatus = (muteStatus == 1) ? 0 : 1;


        // Save the updated status
        PlayerPrefs.SetInt("MuteStatus", muteStatus);
        PlayerPrefs.Save();

        buttonImage.sprite = (muteStatus == 1) ? unMuted : muted;
    }
}
