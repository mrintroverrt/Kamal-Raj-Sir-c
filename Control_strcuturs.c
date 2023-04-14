#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    // Bitwise AND operator
    if (a & b) {
        printf("Bitwise AND: The bits in both integers that are 1 are: %d\n", a & b);
    } else {
        printf("Bitwise AND: There are no bits in both integers that are 1.\n");
    }
    
    // Bitwise OR operator
    if (a | b) {
        printf("Bitwise OR: The bits in either integer that are 1 are: %d\n", a | b);
    } else {
        printf("Bitwise OR: There are no bits in either integer that are 1.\n");
    }
    
    // Bitwise XOR operator
    if (a ^ b) {
        printf("Bitwise XOR: The bits that are different in both integers are: %d\n", a ^ b);
    } else {
        printf("Bitwise XOR: All bits in both integers are the same.\n");
    }
    
    // Logical AND operator
    if (a && b) {
        printf("Logical AND: Both integers are non-zero.\n");
    } else {
        printf("Logical AND: At least one integer is zero.\n");
    }
    
    // Logical OR operator
    if (a || b) {
        printf("Logical OR: At least one integer is non-zero.\n");
    } else {
        printf("Logical OR: Both integers are zero.\n");
    }
    
    // Logical NOT operator
    if (!(a < b)) {
        printf("Logical NOT: The expression 'a < b' is false.\n");
    } else {
        printf("Logical NOT: The expression 'a < b' is true.\n");
    }
    
    return 0;
}
