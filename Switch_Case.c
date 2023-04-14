#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Result of addition: %d\n", a + b);
        break;
    case 2:
        printf("Result of subtraction: %d\n", a - b);
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}
