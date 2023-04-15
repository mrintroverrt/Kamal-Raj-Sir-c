#include <stdio.h>
int main()
{
    int a = 70, b = 80;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d, b = %d", a, b);
}