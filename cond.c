#include <stdio.h>
#include <cs50.h>

int main(void)
{


    int x= get_int("x value?\n");
    int y= get_int("y value?\n");
    int q;
    for(q=0;q<3;q++)
    {
    if (x>y)
    {
        printf(" x is greater than y\n");

    }
    else if(x<y)
    {
        printf("x is less than y\n");

    }
    else
    {
        printf("x is equal to y\n");
    }
    }

}
