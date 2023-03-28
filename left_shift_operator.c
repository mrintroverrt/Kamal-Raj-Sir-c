#include<stdio.h>
int main(){
    int a = 20 , b = 10;

    // Left Shift  a = 6 , a<<2 , 00110 => 01100
    // Right Shift a = 6 , a>>2 , 00110 => 00011 

    printf("Left Shift operator : %d\n",a<<2);
    printf("Right Shift operator : %d\n",b>>10);
}