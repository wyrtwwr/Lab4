#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    setlocale(LC_ALL, "Russian");

    char c;
    int i;
    float f;
    double d;
    char n = 1/i;

    printf("Введите символ (char): ");
    scanf(" %c", &c);

    printf("Введите целое число (int): ");
    scanf("%d", &i);

    printf("Введите дробное число (float): ");
    scanf("%f", &f);

    printf("Введите дробное число (double): ");
    scanf("%lf", &d);

    printf("\nВведенные значения:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %.2f\n", f);
    printf("double d = %.2e\n", d);

    printf("Задани 1 А\n");
    printf("Целая часть: %d\n", (int)f);
    printf("дробнаячасть: %.5f\n", f - (int)f);

    printf("Задани 1 Б\n");
    printf("Целая часть: %d\n", c);
    printf("дробнаячасть: %.5f\n", f - (int)f);
    printf("Шестнадцатеричный код: %X\n", c);
    printf("Десятичный код: %d\n", c);

    printf("Задани 1 В\n");
    printf("Десятичный код: %d\n", n);
}