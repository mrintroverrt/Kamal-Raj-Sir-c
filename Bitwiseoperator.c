#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter your integers: ");
    scanf("%d %d", &a, &b);

    // Bitwise AND operator: returns 1 if both bits are 1, else 0
    printf("Bitwise AND operator: %d\n", a & b);

    // Bitwise OR operator: returns 1 if at least one bit is 1, else 0
    printf("Bitwise OR operator: %d\n", a | b);

    // Bitwise XOR operator: returns 1 if only one of the bits is 1, else 0
    printf("Bitwise XOR operator: %d\n", a ^ b);

    return 0;
}
