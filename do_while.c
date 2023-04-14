#include <stdio.h>

int main() {
    int a, b;
    char choice;
    
    do {
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        printf("Sum: %d\n", a + b);
        
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}
