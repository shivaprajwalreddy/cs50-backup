#include <stdio.h>
#include <cs50.h>

int main()
{
    int size1,size2;


    do
    {
        size1=get_int("starting population size:\n");
    }
    while(size1<10);

    do
    {
        size2=get_int("ending population size:\n");
    }
    while(size1<size2);


}
