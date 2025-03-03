#include<stdio.h>

int main()
{
    int n = 69;
    int *p = &n;
    printf("%i\n",*p);
    printf("%p\n",p);
    printf("%p\n",&n);
}
