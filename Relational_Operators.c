#include<stdio.h>
void main(){
    int a,b;
    printf("Enter The Two Values To Check all Relation Oper : ");
    scanf("%d%d",&a,&b);
    printf("1 and 0 Denotes True and False \n");
    printf("Less `<` Than : %d\n",a<b);
    printf("Greater `>` Than :  %d\n",a>b);
    printf("Greater than or equal to : %d\n",a>=b);
    printf("Less than or equal to : %d\n",a<=b);
    printf("Equal to  : %d\n",a==b);
    printf("Not Equal to : %d\n",a!=b);
}