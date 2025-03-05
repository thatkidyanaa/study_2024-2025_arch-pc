#include <stdio.h>

double function(double x) {
    return x * x + 2 * x - 5;
}

int main() {
    double a, b;
    
    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите b: ");
    scanf("%lf", &b);
    
    if (a >= b) {
        printf("a должно быть меньше b.\n");
        return 1;
    }

    double max_value = function(a);
    double min_value = function(a);

    for (double x = a; x <= b; x += 0.3) {
        double y = function(x);


        if (y > max_value) {
            max_value = y;
        }
        if (y < min_value) {
            min_value = y;
        }
    }

    printf("Наименьшее значение функции: %lf\n", min_value);
    printf("Наибольшее значение функции: %lf\n", max_value);

    return 0;
}

