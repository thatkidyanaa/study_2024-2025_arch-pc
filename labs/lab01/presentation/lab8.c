#include <stdio.h>
#include <limits.h>

int main() {
    int M, N;

    printf("Введите количество строк (M): ");
    scanf("%d", &M);
    printf("Введите количество столбцов (N): ");
    scanf("%d", &N);

    int matrix[M][N];

    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int numMin = -1;
    long long minProduct = LLONG_MAX;
    for (int j = 0; j < N; j++) {
        long long product = 1;

        for (int i = 0; i < M; i++) {
            product *= matrix[i][j];
        }

        if (product < minProduct) {
            minProduct = product;
            numMin = j; 
        }
    }

    printf("Номер столбца с наименьшим произведением: %d\n", numMin);
    printf("Наименьшее произведение: %lld\n", minProduct);

    return 0;
}

