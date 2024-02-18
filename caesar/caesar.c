#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string argv);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        bool digit = only_digits(argv[1]);
        if (digit == false)
        {
            printf("usage: ./caesar key\n");
            return 1;
        }
        else
        {
            return 0;
        }
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
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
