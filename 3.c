#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5


int main() {
    int A[M][N], B[M][N];

    printf("Исходная матрица:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 10;
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nТранспонированная матрица:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            B[j][i] = A[i][j];
        }
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}