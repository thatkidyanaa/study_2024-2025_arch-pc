#include <stdio.h>
#include <math.h>
double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * fabs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    printf("Введите координаты вершин треугольника:\n");
    printf("Вершина 1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Вершина 2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Вершина 3 (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);

    double area = triangleArea(x1, y1, x2, y2, x3, y3);

    printf("Площадь треугольника: %.2lf\n", area);

    return 0;
}

