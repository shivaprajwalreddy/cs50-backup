#include <cs50.h>
#include <stdio.h>

void row(int length);

int main(void)
{
    int n;
    do
    {
        n = get_int("height: ");
    }
    while(n<1);
    for(int i = 0; i < n; i++)
    {
        row(i + 1);
    }
}

void row(int length)
{
    for(int j = 0; j < length; j++)
    {
        printf("#");
    }
    printf("\n");
}
