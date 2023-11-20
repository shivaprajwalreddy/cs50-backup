#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_size();

    int print(n);
}










































int get_size(void)
{
 int i,j;
    do
    {
    n=get_int("size=");
    }
    while(n<1);
}

int print(void)
{
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("#");
        }
        printf("\n");
    }
}
