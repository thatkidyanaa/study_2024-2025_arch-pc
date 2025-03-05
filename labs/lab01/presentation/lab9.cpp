#include <iostream>
#include <cmath>

using namespace std;

double distanceFromOrigin(double x, double y) {
    return sqrt(x * x + y * y);
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Введите координаты трех точек:" << endl;
    cout << "Точка 1 (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Точка 2 (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Точка 3 (x3, y3): ";
    cin >> x3 >> y3;

    double d1 = distanceFromOrigin(x1, y1);
    double d2 = distanceFromOrigin(x2, y2);
    double d3 = distanceFromOrigin(x3, y3);
    
    if (d1 < d2 && d1 < d3) {
        cout << "Точка 1 ближе к началу координат." << endl;
    } else if (d2 < d1 && d2 < d3) {
        cout << "Точка 2 ближе к началу координат." << endl;
    } else if (d3 < d1 && d3 < d2) {
        cout << "Точка 3 ближе к началу координат." << endl;
    } else {
        cout << "Несколько точек на одинаковом расстоянии от начала координат." << endl;
    }

    return 0;
}
