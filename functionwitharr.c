#include <stdio.h>
void loop(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\t", arr[i]);
    }
}
int main()
{
    char arr[] = {'h', 'j', 'n', 'd', 's', 'r'};
    int n = sizeof(arr) / sizeof(arr[0]);
    loop(arr, n);
    return 0;
}