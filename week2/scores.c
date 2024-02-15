#include <cs50.h>
#include <stdio.h>

int main()
{
    const int N = 3;
    int scores[N];
    for(int i=0; i<N; i++)
    {
    scores[i] = get_int("score: ");
    }
    printf("avg=%f\n",(scores[1] + scores[2] + scores[0])/float(N));
}

