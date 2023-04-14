#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a value: ");
    scanf("%d", &a);

    printf("The value of a shifted right by 3 bits is: %d\n", a >> 3);

    printf("Enter another value for b: ");
    scanf("%d", &b);
    printf("The value of a shifted left by b bits is: %d\n", a << b);

    return 0;
}
