#include <cs50.h>
#include <stdio.h>

int calc_quaters(int cents);

int calc_dime(int cents);

int calc_nickel(int cents);

int calc_penny(int cents);

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

    int dime = calc_dime(cents);

    cents = cents - (dime * 10);

    int nickel = calc_nickel(cents);

    cents = cents - (nickel * 5);

    int penny = calc_penny(cents);

    cents = cents - (penny * 1);

    printf("%i\n",quaters+dime+nickel+penny);
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

int calc_dime(int cents)
{

}

int calc_nickel(int cents)
{

}

int calc_penny(int cents)
{

}
