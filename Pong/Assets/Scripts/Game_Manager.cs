using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class Game_Manager : MonoBehaviour
{
    public Ball ball;

    public Paddle playerPaddle;
    public Paddle player2Paddle;
    public Paddle botPaddle;

    public TMP_Text playerScoreText;
    public TMP_Text player2ScoreText;
    public TMP_Text botScoreText;

    private int _player_Score;
    private int _player2_Score;
    private int _bot_Score;

    // Add a point to the player 1 score and reset the round
    public void PlayerScores()
    {
        _player_Score++;
        this.playerScoreText.text = _player_Score.ToString();
        ResetRound();
    }

    // Add a point to the bot score and reset the round
    public void BotScores()
    {
        _bot_Score++;
        this.botScoreText.text = _bot_Score.ToString();
        ResetRound();
    }

    // Add a point to the player 2 score and reset the round
    public void Player2Scores()
    {
        _player2_Score++;
        this.player2ScoreText.text = _player2_Score.ToString();
        ResetRound();
    }

    // Reset the round, the condition by scene is to prevent alerts
    private void ResetRound()
    {
        if(SceneManager.GetActiveScene().name == "OnePlayer") 
        {
            this.playerPaddle.ResetPosition();
            this.botPaddle.ResetPosition();
            this.ball.ResetPosition();
            this.ball.AddStartingForce();
        } else
        {
            this.playerPaddle.ResetPosition();
            this.player2Paddle.ResetPosition();
            this.ball.ResetPosition();
            this.ball.AddStartingForce();
        }
        
    }

    // Esc to go back to main menu
    void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            SceneManager.LoadSceneAsync("MainMenu");
        }
    }

    // Win condition to end the game and go to restart menu
    void FixedUpdate()
    {
        if(_player_Score == 10 || _bot_Score == 10 || _player2_Score == 10)
        {
            SceneManager.LoadSceneAsync("RestartMenu");
        }    
    }
}
