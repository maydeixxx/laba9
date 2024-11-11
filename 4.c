#include <stdio.h>
#include <stdlib.h>

#define N 3
#define summa 15

int isMagicSquare(int square[N][N]) {
    int sum;

    for (int i = 0; i < N; i++) {
        sum = 0;
        for (int j = 0; j < N; j++) {
            sum += square[i][j];
        }
        if (sum != summa) {
            return 0;
        }
    }

    for (int j = 0; j < N; j++) {
        sum = 0;
        for (int i = 0; i < N; i++) {
            sum += square[i][j];
        }
        if (sum != summa) {
            return 0;
        }
    }

    sum = 0;
    for (int i = 0; i < N; i++) {
        sum += square[i][i];
    }
    if (sum != summa) {
        return 0;
    }

    sum = 0;
    for (int i = 0; i < N; i++) {
        sum += square[i][N - 1 - i];
    }
    if (sum != summa) {
        return 0;
    }

    return 1; 
}

void magKvadrat(int square[N][N]) {
    int numbers[N * N];
    for (int i = 0; i < N * N; i++) {
        numbers[i] = i + 1; 
    }

    for (int i = 0; i < N * N; i++) {
        int j = rand() % (N * N);
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            square[i][j] = numbers[i * N + j];
        }
    }
}

int main() {

    int square[N][N];
    int count = 0;

    do {
        magKvadrat(square);
        count++;
    } while (!isMagicSquare(square));

    printf("магический квадрат:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", square[i][j]);
        }
        printf("\n");
    }

    printf("Количество генераций: %d\n", count);

    return 0;
}