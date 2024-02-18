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
    int key = atoi(argv[1]);
    string text = get_string("plaintext:  ");
    for (int i = 0, length = strlen(text); i < length; i++)
    {
        rotate(text[i],key);
    }
    string cipher =
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

char rotate(char p, int i)
{
    char c;
    if(isupper(p))
    {
        c = ((p - 'A') + i) % 26;
    }
    if(islower(p))
    {
        c = ((p - 'a')+ i) % 26;
    }
    return c;
}
