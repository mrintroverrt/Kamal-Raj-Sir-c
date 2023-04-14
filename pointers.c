#include <stdio.h>
int main()
{
    int a = 30;
    int *v;
    v = &a;
    printf("This is the data in the pointer : %d\n", *v);
    *v = *v + 2;
    printf("This Changed memory value of pointer : %d\n", a);
}