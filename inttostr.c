#include<stdio.h>
#include<stdlib.h>
void main(){
    char num[10];
    int x;
    printf("Enter The Integer Value : ");
    scanf("%d",x);
    sprintf(num,"%d",x);
    printf("The Integer Converted to String : %s",num);
}