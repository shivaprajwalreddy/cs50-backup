#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);

int main()
{
    string player1 = get_string("player1: ");
    string player2 = get_string("player2: ");

    int score1 = compute_score(player1);
    int score2 = compute_score(player2);

    if(score1 > score2)
    {
        printf("player1 wins)
    }

}
