#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c;

    // Arithmetic operators
    c = a + b; // Addition
    printf("a + b = %d\n", c);
    c = a - b; // Subtraction
    printf("a - b = %d\n", c);
    c = a * b; // Multiplication
    printf("a * b = %d\n", c);
    c = a / b; // Division
    printf("a / b = %d\n", c);
    c = a % b; // Modulus
    printf("a %% b = %d\n", c);

    // Increment and decrement operators
    a++; // Post-increment
    printf("a++ = %d\n", a);
    b--; // Post-decrement
    printf("b-- = %d\n", b);

    // Assignment operators
    a += b; // Equivalent to a = a + b
    printf("a += b = %d\n", a);
    b *= 2; // Equivalent to b = b * 2
    printf("b *= 2 = %d\n", b);

    // Comparison operators
    c = (a == b); // Equality
    printf("a == b is %d\n", c);
    c = (a != b); // Inequality
    printf("a != b is %d\n", c);
    c = (a > b); // Greater than
    printf("a > b is %d\n", c);
    c = (a < b); // Less than
    printf("a < b is %d\n", c);

    // Logical operators
    c = (a > b) && (b > 0); // Logical AND
    printf("(a > b) && (b > 0) is %d\n", c);
    c = (a > b) || (b < 0); // Logical OR
    printf("(a > b) || (b < 0) is %d\n", c);
    c = !(a > b); // Logical NOT
    printf("!(a > b) is %d\n", c);

    // Bitwise operators
    c = a & b; // Bitwise AND
    printf("a & b = %d\n", c);
    c = a | b; // Bitwise OR
    printf("a | b = %d\n", c);
    c = a ^ b; // Bitwise XOR
    printf("a ^ b = %d\n", c);
    c = ~a; // Bitwise NOT
    printf("~a = %d\n", c);
    c = a << 1; // Left shift
    printf("a << 1 = %d\n", c);
    c = b >> 1; // Right shift
    printf("b >> 1 = %d\n", c);

    // Conditional operator
    c = (a > b) ? a : b; // Ternary operator
    printf("The larger value is %d\n", c);

    return 0;
}
