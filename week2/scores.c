#include <cs50.h>
#include <stdio.h>

const int N = 3;

float average(int N ,int scores[]);

int main()
{
    int scores[N];
    for(int i=0; i<N; i++)
    {
    scores[i] = get_int("score: ");
    }
    printf("avg=%f\n",average(N, scores));
}

float average(int n, int scores[])
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    return sum / (float) length;
}

