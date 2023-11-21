#include <stdio.h>
#include <cs50.h>

int main()
{
    long a= get_int("value of a?\n");
    long b=get_int("value of b?\n");
    double c=a+b;
    printf("add=%f\n",c);
}

