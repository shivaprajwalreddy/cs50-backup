#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

bool only_digits(string argv);

int main (int argc, string argv[])
{
    if (argc == 2)
    {
        return 0;
    }
    else
    {
        printf("usage: ./caesar key\n");
        return 1;
    }
    bool digit = only_digits(argv[1]);
    if (digit == true)
    {
        return 0;
    }
    else
    {
        printf("usage: ./caesar key\n");
        return 1;
    }

}

bool only_digits(string s)
{
    for (i = 0, length = strlen(s); i < strlen; i++)
    {
        if (isdigit(argv))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
