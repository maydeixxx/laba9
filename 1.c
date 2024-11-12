#include <stdio.h>
#include <stdlib.h>
const int M = 10;
const int N = 20;


int main() {
    int i, j, A[M][N], str1, str2;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            A[i][j] = rand()%10;
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < M - 1; i += 2) {
        for (j = 0; j < N; j++) {
            int temp = A[i][j];
            A[i][j] = A[i + 1][j];
            A[i + 1][j] = temp;
        }
    }

    printf("\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

}

