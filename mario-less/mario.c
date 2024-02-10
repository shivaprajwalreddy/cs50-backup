#include <cs50.h>
#include <stdio.h>

void print_row(int length);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    print_row(n);
}

void print_row(int length)
{
    for (int i=0; i<length; i++)
    {
        printf("#");
    }
}
