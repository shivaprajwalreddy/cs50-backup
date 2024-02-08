#include <stdio.h>
#include <cs50.h>

int add(int a,int b);

int main()
{
    int x=get_int("what is x\n");
    int y=get_int("what is y\n");

    printf("%i \n", add(x,y) );
}
int add(int a,int b)
{
    return a+b;
}
