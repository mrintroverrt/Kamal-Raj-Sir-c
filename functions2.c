#include<stdio.h>
int addandprint(){
    int a,b;
    printf("Enter Two Integer Values :");
    scanf("%d %d",&a,&b);
    return a*b;
    
}
int main(){
    printf("This is the value %d",addandprint());
}