#include <stdio.h>

int main() {
    int n, i;
    int positiveCount = 0, negativeCount = 0;

    printf("Введите количество элементов в массиве: ");
    scanf("%d", &n);

    int arr[n];

    printf("Введите элементы массива:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }

    printf("Количество положительных элементов: %d\n", positiveCount);
    printf("Количество отрицательных элементов: %d\n", negativeCount);

    return 0;
}
