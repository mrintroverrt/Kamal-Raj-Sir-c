#include <stdio.h>
void main()
{
    int i;
    for (i = 0; i < 128; i++)
    {
        printf("ASCII :%d => %c\n", i, i);
    }
}