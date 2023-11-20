#include <stdio.h>
#include <cs50.h>

int main()
{
    int i,j;
    int n=get_int("size=");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("#");
        }
        printf("\n");
    }

}
