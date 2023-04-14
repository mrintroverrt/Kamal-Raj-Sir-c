#include <stdio.h>
int main()
{
    int a[] = {25, 45, 78, 69, 87};
    int x[] = {25, 45, 69, 87};
    int i ,sum_a = 0,sum_x = 0;
    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
      sum_a += a[i];
    }
    for ( i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        sum_x += x[i];
    }
    
    int diif = sum_a - sum_x;
    printf("This Missing Number is %d",diif);
    return 0;
}