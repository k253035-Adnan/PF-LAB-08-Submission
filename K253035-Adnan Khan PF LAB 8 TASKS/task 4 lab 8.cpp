#include <stdio.h>
int main() {
    int a[2][2][2];
    int i, j, k;

    printf("Enter 8 elements for 2x2x2 array:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("\nDisplaying the 2x2x2 array:\n");
    for(i = 0; i < 2; i++) {
        printf("Layer %d:\n", i + 1);
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

