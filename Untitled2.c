#include <stdio.h>

void main() {
    int a[3][3], b[3][3], mul[3][3];
    int i, j, k;


    printf("Enter matrix a:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix b:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
    }
    printf("multiplication of matrix a and b :\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            mul[i][j] = 0;
            for(k = 0; k < 3; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication of the two matrices is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}
