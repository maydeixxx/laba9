#include <stdio.h>
#define N 5

void matrica(int A[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
}

void transpon(int A[N][N], int transposed[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transposed[j][i] = A[i][j];
        }
    }
}

int main() {
    int A[N][N] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    
    int transposed[N][N];

    printf("Исходная матрица:\n");
    matrica(A);

    transpon(A, transposed);

    printf("\nТранспонированная матрица:\n");
    matrica(transposed);

    return 0;
}