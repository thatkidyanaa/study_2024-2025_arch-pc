#include <iostream>

int main() {
    int sum = 0;

    for (int i = 100; i <= 200; ++i) {
        if (i % 17 == 0) {
            sum += i;
        }
    }

    std::cout << "Сумма чисел от 100 до 200, кратных 17: " << sum << std::endl;
    return 0;
}
