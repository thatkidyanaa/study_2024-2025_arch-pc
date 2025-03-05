#include <iostream>
#include <vector>
#include <limits>
int main () {
	int M, N;

    std::cout << "Введите количество строк (M) и столбцов (N): ";
    std::cin >> M >> N;

    std::vector<std::vector<int>> matrix(M, std::vector<int>(N));

    std::cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    int minElement = std::numeric_limits<int>::max();
    int minRowIndex = -1;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minRowIndex = i;
            }
        }
    }

    std::cout << "Матрица после удаления строки с минимальным элементом:\n";
    for (int i = 0; i < M; ++i) {
        if (i != minRowIndex) {
            for (int j = 0; j < N; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << "\n";
        }
    }

    return 0;
	
	}
