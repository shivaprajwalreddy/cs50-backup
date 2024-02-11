#include <cs50.h>
#include <stdio.h>

int calc_quaters(int cents);

int main(void)
{
    int cents;
    do
    {
        cents = get_int("owed: ");
    }
    while(cents < 1);

    int quaters = calc_quaters(cents);

    cents = cents - (quaters * 25);

    printf("%i\n",cents);
}

int calc_quaters(int cents)
{
    int quaters = 0;
    while(cents >= 25)
    {
        quaters++;
        cents = cents - 25;
    }
    return quaters;
}
