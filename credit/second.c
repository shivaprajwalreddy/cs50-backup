#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;
    number = get_long("number: ");
    while(number != 0)
    {
        int digit=number % 10;
        number = number/10;
    }
}
