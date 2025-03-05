#include <iostream>

int main() {
    int m, n;
	std::cout << "Введите числитель (m): ";
    std::cin >> m;
    std::cout << "Введите знаменатель (n): ";
    std::cin >> n;
int a = m; 
int b = n;


    while (b != 0) {
int temp = b;
        b = a % b;
        a = temp; 
    }
    
int gcd = a; 
	m /= gcd;
    n /= gcd;
    std::cout << "Сокращенная дробь: " << m << "/" << n << std::endl;

    return 0;
}


