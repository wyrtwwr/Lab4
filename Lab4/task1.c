#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    setlocale(LC_ALL, "Russian");
    //задание 1
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    printf("\nВсе значения:\n c='%c'\n i=%d\n f=%.2f\n d=%.12f\n", c, i, f, d);
    //задание 2

    char c2;
    int i2;
    float f2;
    double d2;
    puts("Введите символ:");
    scanf(" %c", &c2);

    puts("Введите целое число:");
    scanf("%d", &i2);

    puts("Введите вещественное число (float):");
    scanf("%f", &f2);

    puts("Введите вещественное число (double):");
    scanf("%lf", &d2);

    printf("\nВсе значения:\n c='%c'\n i=%d\n f=%.2f\n d=%.12f\n", c2, i2, f2, d2);


    printf("Задани 1А\n");
    printf("Целая часть: %d\n", (int)f2);
    printf("дробнаячасть: %.5f\n", f2 - (int)f2);

    printf("Задани 1Б\n");
    printf("Шестнадцатеричный код: %X\n", c2);
    printf("Десятичный код: %d\n", c2);

    printf("Задани 1в\n");
    float delenie = 1.0 / i2;
    printf("%.6f", delenie);
}

