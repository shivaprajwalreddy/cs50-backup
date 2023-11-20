#include <stdio.h>
#include <cs50.h>

int get_size(void);
int print(void);
int main(void)
{
    int n = get_size();

    print(n);
}

int get_size(void)
{
    int n;
    do
    {
    n=get_int("size=");
    }
    while(n<1);
    return n;
}

void print(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("#");
        }
        printf("\n");
    }
}
