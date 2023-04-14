#include <stdio.h>

int modify(int *c)
{
    *c = *c * 10;
}

int main()
{
    int a = 20;
    modify(&a);
    printf("The out put value %d", a);
}