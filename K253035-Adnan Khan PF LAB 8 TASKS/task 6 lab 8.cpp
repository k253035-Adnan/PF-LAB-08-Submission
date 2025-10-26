#include <stdio.h>
int main() {
    int a[3][3];
    int i, j, k, minRow, colIndex;
    int found = 0;
    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        minRow = a[i][0];
        colIndex = 0;
        for(j = 1; j < 3; j++) {
            if(a[i][j] < minRow) {
                minRow = a[i][j];
                colIndex = j;
            }
        }
        for(k = 0; k < 3; k++) {
            if(a[k][colIndex] > minRow)
                break;
        }
        if(k == 3) {
            printf("\nSaddle point is %d at position (%d,%d)\n", minRow, i+1, colIndex+1);
            found = 1;
        }
    }
    if(!found)
    printf("\nNo saddle point found.\n");
    return 0;
}

