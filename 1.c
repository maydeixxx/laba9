#include <stdio.h>
#include <stdlib.h>
const int M = 10;
const int N = 20;

    void stroki(int A[M][N], int str1, int str2) {
    for (int j = 0; j < N; j++) {
        int temp = A[str1][j];
        A[str1][j] = A[str2][j];
        A[str2][j] = temp;
    }
}

int main() {
    int i, j, A[M][N];

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            A[i][j] = i * N + j + 1;
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i += 2) {
        stroki(A, i, i + 1);
    }

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

}

