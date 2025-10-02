#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int A, B, C;
    int condition;

    printf("=== СИСТЕМА КОНТРОЛЯ ДОСТУПА ЭНЕРГИИ===\n");
    printf("Введите три целых числа (энергия 1, энергия 2 , энергия 3): ");

    scanf("%d %d %d", &A, &B, &C);

    condition = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));

    printf("Доступ разрешен (1 - да, 0 - нет): %d\n", condition);

}
