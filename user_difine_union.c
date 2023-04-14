#include <stdio.h>
#include <string.h>

// define a user-defined structure
struct Person {
    char name[50];
    int age;
};

// define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // create a Person structure and initialize its values
    struct Person p1;
    strcpy(p1.name, "John");
    p1.age = 30;
    
    // create a Data union and set its value to an integer
    union Data d1;
    d1.i = 10;
    
    // print out the values of the Person structure and Data union
    printf("Person Name: %s\n", p1.name);
    printf("Person Age: %d\n", p1.age);
    
    printf("Data Value (integer): %d\n", d1.i);
    d1.f = 3.14;
    printf("Data Value (float): %f\n", d1.f);
    strcpy(d1.str, "hello");
    printf("Data Value (string): %s\n", d1.str);
    
    return 0;
}
