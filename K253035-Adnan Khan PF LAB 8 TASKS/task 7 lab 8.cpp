#include <stdio.h>
int main() {
    int start, end;
    int i, j, flag;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for(i = start; i <= end; i++) {
        if(i > 1) {
            flag = 0;
            for(j = 2; j < i; j++) {
                if(i % j == 0) {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}

