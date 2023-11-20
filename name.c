#include <stdio.h>
#include <cs50.h>

int main()
{
    string name = get_string("what is your name\n");
    string second_name = get_string("what is your second name\n");
    printf("hello %s%s\n",name,second_name);
}
