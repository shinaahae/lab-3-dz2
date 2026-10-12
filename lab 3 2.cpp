#include <stdio.h>
#include <locale.h>






int main()
{
    setlocale(LC_ALL, "RUS");
    double mmHg, Pa, bar;
    printf("\n--- Вариант 33 (мм рт. ст. → бары, паскали) ---\n");
    printf("Введите давление в мм рт. ст.: ");
    scanf("%lf", &mmHg);

    Pa = mmHg * 133.322;
    bar = Pa / 100000.0;

    printf("Результат: %.3f Па, %.6f бар\n", Pa, bar);
    return 0;

}
