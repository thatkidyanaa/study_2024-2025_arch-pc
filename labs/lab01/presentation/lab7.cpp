#include <iostream>
#include <vector>
#include <limits>

int main() {
    int N;
    std::cout << "Введите размер массива: ";
    std::cin >> N;
 if (N <= 0) {
    }

    std::vector <int> arr(N);
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    int maxLocalMin = std::numeric_limits<int>::min();
    bool foundLocalMin = false;

    for (int i = 1; i < N - 1; ++i) {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
            foundLocalMin = true;
            if (arr[i] > maxLocalMin) {
                maxLocalMin = arr[i];
            }
        }
    }

    if (foundLocalMin) {
        std::cout << "Максимальный локальный минимум: " << maxLocalMin << std::endl;
    } else {
        std::cout << "Локальных минимумов не найдено." << std::endl;
    }

    return 0;
}

