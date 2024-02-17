#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

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
    int score = 0;

    for (int i = 0, length = strlen(word); i < length; i++)
    {
        
    }
}
