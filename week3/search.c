#include <cs50.h>
#include <stdio.h>

int main()
{
    int numbers[] = {10, 48, 86, 684, 61684, 6414, 69};

    int n = get_int("number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
}
