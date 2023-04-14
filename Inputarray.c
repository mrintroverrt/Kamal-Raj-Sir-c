#include <stdio.h>
void main()
{
    int i;
    int x[5];
    printf("Enter Your Integer : ");
    for (i = 0; i < 5; i++)

        scanf("%d", &x[i]);
    printf("The Given Values are : \n");
    for (i = 0; i < 5; i++)
        printf("%d\t", x[i]);
}