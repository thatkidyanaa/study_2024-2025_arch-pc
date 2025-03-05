#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3;
    float volume, surface_area, angle;

    printf("Введите длины сторон прямоугольного параллелепипеда:\n");
    printf("Сторона 1: ");
    scanf("%f", &side1);
    printf("Сторона 2: ");
    scanf("%f", &side2);
    printf("Сторона 3: ");
    scanf("%f", &side3);

    volume = side1 * side2 * side3;
    surface_area = 2 * (side1 * side2 + side1 * side3 + side2 * side3);
    angle = acos(sqrt(pow(side1, 2) + pow(side2, 2))/side3);

    printf("Объем параллелепипеда: %f\n", volume);
    printf("Площадь боковой поверхности параллелепипеда: %f\n", surface_area);
    printf("Углы между гранями параллелепипеда (в радианах): %f\n", angle);

    return 0;
}
