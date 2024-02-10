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

    for (int i = 0; i < n; i++)
    {
        print_row(i + 1);
    }
}

void print_row(int length)
{
    printf("#");
}
