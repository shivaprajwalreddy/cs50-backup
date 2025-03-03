#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main()
{
    string strings[] = {"10", "48", "86", "684", "61684", "6414", "69"};

    string n = get_string("number: ");
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(strings[i], n) == 0)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
}
