#include <stdio.h>

int main() {
    int a[2][2] = {{10, 50}, {20, 78}};
    int r, c;
    
    printf("The 2D array values:\n");
    
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 2; c++) {
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}
