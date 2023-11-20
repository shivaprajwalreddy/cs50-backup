#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int x= get_int("x value?\n");
    int y= get_int("y value?\n");
    if (x>y)
    {
        printf(" x is greater than y\n");
    }
}
