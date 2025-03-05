#include <stdio.h>

int main() {
    int n;  // колво сенокосилок
    int m;  // время работы первой сенокосилки (ч)

    
    printf("Введите количество сенокосилок (n): ");
    scanf("%d", &n);
    printf("Введите количество часов, отработанных первой сенокосилкой (m) : ");
    scanf("%d", &m);

    
    int totalmin = 0;
    int minforfirstmower = m * 60;  


    for (int i = 0; i < n; i++) {
       
        totalmin += minforfirstmower + (i * 10); 
    }

    int hours = totalmin / 60;
    int minutes = totalmin % 60;
 
    printf("Общее время работы всей бригады: %d часов и %d минут\n", hours, minutes);

    return 0;
}
