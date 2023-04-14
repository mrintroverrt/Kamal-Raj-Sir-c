// * Functions with inputs and return values: These functions take one or more input values
// and return a result based on the provided inputs.

// * Functions with inputs and no return values: These functions take one or more input values
//   and perform some action based on the provided inputs.

// * Functions without inputs and with return values: These functions do not take any input
//   values but return a result based on their internal logic.

// * Functions without inputs and without return values: These functions do not take any input
//   values and do not return any results.

#include<stdio.h>
void display();  // Void Meaning is function didnot retuen any return type 
int main(){
    display();
}
void display(){
    printf("Hi"); // This is Function Definition 
}

// Function 2 There will be input but no return value 
#include<stdio.h>
int addition(int a, int b) {
    int x;
    x = 2 + 4;
    printf("The sum of %d and %d is %d\n", a, b, x);
    return x;
}


int manewin(){
   addition(2,8);
}