#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 5

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
    float A[M][N];

    printf("Исходная матрица:\n");
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            A[i][j] = rand() % 10;
            printf("%3.0f", A[i][j]);
        }
        printf("\n");
    }


    delenie(A);

    printf("\nМатрица после деления строк:\n");
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            printf(" %.3f", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}