#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40};
    int *v, i;
    v = a;
    int length = sizeof(a) / sizeof(a[0]);
    for (i = 0; i <length; i++)
    {
        printf("Array Data %d Address of the data %p\n", *v, v);
        v = v + 1;
    }
    
    printf("%d",sizeof(a[0]));
}