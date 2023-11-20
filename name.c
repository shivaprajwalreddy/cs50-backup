#include <stdio.h>
#include <cs50.h>

int main()
{
    string name = get_string("what is your name\n");
    string sur_name = get_string("what is your surname\n");
    printf("hello %s%s\n",sur_name ,name);
}
