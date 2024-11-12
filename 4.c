#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 3

int main() {
    int A[M][N], line1, line2, line3, row1, row2, row3, count;
    while (1) {
        line1 = line2 = line3 = 0;
        row1 = row2 = row3 = 0;
        count++;

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            A[i][j] = rand() % 5;
        }
    }

    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == 0) {
                    line1 += A[i][j];
                    row1 += A[j][i];
                }
                if (i == 1) {
                    line2 += A[i][j];
                    row2 += A[j][i];
                }
                if (i == 2) {
                    line3 += A[i][j];
                    row3 += A[j][i];
                }
            }
        }
        if (row1 == row2 && row2 == row3 &&
            line1 == line2 && line2 == line3) {
            printf(" Маг.куб %d генераций:\n", count);
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    printf(" %3d", A[i][j]);
                }
                printf("\n");
            }
            break; 
        }
    }
    return 0;
}
    
