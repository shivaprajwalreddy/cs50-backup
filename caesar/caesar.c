#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

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

}

bool only_digits(string argv)
