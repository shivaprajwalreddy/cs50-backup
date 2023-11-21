#include <stdio.h>
#include <cs50.h>

int main()
{
    int a= get_int("value of a?\n");
    int b=get_int("value of b?\n");
    int c=a+b;
    printf("add=%d\n",c);
}
