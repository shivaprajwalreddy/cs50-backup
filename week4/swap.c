#include<stdio.h>

void swap(int *a,int *b);

int main(void)
{
    int a = 5;
    int b = 10;

    printf("a=%i,b=%i\n",a,b);
    swap(&a,&b);
    printf("a=%i,b=%i\n",a,b);
}

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
