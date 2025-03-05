#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double side;

    cout << "Введите длину стороны равностороннего треугольника: ";
    cin >> side;

    // Площадь равностороннего треугольника
    double area = (sqrt(3) / 4) * pow(side, 2);

    // Радиус окружности, вписанной в равносторонний треугольник
    double r_in = side / (2 * sqrt(3));

    // Радиус окружности, описанной вокруг равностороннего треугольника
    double r_out = side / sqrt(3);

    cout << "Площадь равностороннего треугольника: " << area << endl;
    cout << "Радиус вписанной окружности: " << r_in << endl;
    cout << "Радиус описанной окружности: " << r_out << endl;

    return 0;
}

