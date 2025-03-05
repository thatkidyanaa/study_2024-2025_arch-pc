#include <stdio.h>

int main() {
    int atomic_number;

    printf("Введите атомный номер щелочного металла (3 для Li, 11 для Na, 19 для K, 37 для Rb, 55 для Cs): ");
    scanf("%d", &atomic_number);

    switch (atomic_number) {
        case 3: // Литий(Li)
            printf("Цвет пламени: Зеленый");
            break;
        case 11: // Натрий(Na)
            printf("Цвет пламени: Красный");
            break;
        case 19: // Калий(K)
            printf("Цвет пламени: Желтый");
            break;
        case 37: // Рубидий(Rb)
            printf("Цвет пламени: Синий");
            break;
        case 55: // Цезий(Cs)
            printf("Цвет пламени: Голубой");
            break;
        default:
            printf("Некорректный атомный номер. Пожалуйста, введите номер для одного из щелочных металлов.n");
            break;
    }

    return 0;
}

