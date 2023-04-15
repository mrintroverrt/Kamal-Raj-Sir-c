#include<stdio.h>
void swap(int*p,int*p1){
    int t ;
    t = *p;
    *p = *p1;
    *p1 = t;

}
int main(){
    int a = 10 , b =20;
    swap(&a,&b);
    printf("This is a value =  %d | This is b value = %d",a,b);
}