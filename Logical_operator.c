#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    // Logical AND operator
    printf("The value of AND operator: %d\n", a && b);

    // Logical OR operator
    printf("The value of OR operator: %d\n", a || b);

    // Logical NOT operator
    printf("The value of NOT operator: %d\n", !(a < b));

    return 0;
}
