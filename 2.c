#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 5

void matrica(float A[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
}

void delenie(float A[M][N]) {
    for (int i = 0; i < M; i++) {
        float sum = 0.0;

        for (int j = 0; j < N; j++) {
            sum += A[i][j];
        }

        if (sum != 0) {
            for (int j = 0; j < N; j++) {
                A[i][j] /= sum;
            }
        }
    }
}

int main() {
    float A[M][N] = {
        {1.0, 7.0, 3.0, 4.0, 5.0},
        {8.0, 3.0, 2.0, 2.0, 1.0},
        {3.0, 3.0, 3.0, 5.0, 6.0},
        {2.0, 5.0, 5.0, 3.0, 2.0},
        {3.5, 8.5, 5.5, 4.5, 5.5}
    };

    printf("Исходная матрица:\n");
    matrica(A);

    delenie(A);

    printf("\nМатрица после деления строк:\n");
    matrica(A);

    return 0;
}