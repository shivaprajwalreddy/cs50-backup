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
        for (int k = n - i; k > 1; k--)
        {
            printf(" ");
        }
        print_row(i + 1);
        printf("  ");
        print_row(i + 1);
        printf("\n");
    }
}

void print_row(int length)
{
    for (int j = 0; j < length; j++)
    {
        printf("#");
    }
}
