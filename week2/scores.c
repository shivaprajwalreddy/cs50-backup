#include <cs50.h>
#include <stdio.h>

int main()
{
    int scores[3];
    for(int i=0; i<3; i++)
    {
    scores[i] = get_int("score: ");
    }
    printf("avg=%f\n",(scores[1] + scores[2] + scores[0])/3.0);
}

