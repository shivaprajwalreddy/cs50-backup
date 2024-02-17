#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);

int main()
{
    string player1 = get_string("player 1: ");
    string player2 = get_string("player 2: ");

    int score1 = compute_score(player1);
    int score2 = compute_score(player2);

    if(score1 > score2)
    {
        printf("player 1 wins!\n");
    }
    if else(score2 > score1)
    {
        printf("player 2 wins!\n");
    }
    else
    {
        printf("tie!\n");
    }
}

int compute_score(string word)
{
    
}
