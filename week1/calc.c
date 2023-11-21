#include <stdio.h>
#include <cs50.h>

int main()
{
    long a= get_int("value of a?\n");
    long b=get_int("value of b?\n");
    long c=a+b;
    printf("add=%ld\n",c);
}

