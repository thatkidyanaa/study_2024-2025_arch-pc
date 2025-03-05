#include <stdio.h>

int main() {
    int n;  // колво сенокосилок
    int m;  // время работы первой сенокосилки в (ч)

    printf("Введите количество сенокосилок (n): ");
    scanf("%d", &n);
    printf("Введите время работы первой сенокосилки (m) : ");
    scanf("%d", &m);

    int totalMinutes = 0;
    int minforfirstmower = m * 60; 

    for (int i = 0; i < n; i++) {

        totalMinutes += minforfirstmower + (i * 10); 
    }

    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;


    printf("Общее время работы всей бригады: %d часов и %d минут\n", hours, minutes);

    return 0;
}
 
