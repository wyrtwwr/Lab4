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

    printf("������� ������ (char): ");
    scanf(" %c", &c);

    printf("������� ����� ����� (int): ");
    scanf("%d", &i);

    printf("������� ������� ����� (float): ");
    scanf("%f", &f);

    printf("������� ������� ����� (double): ");
    scanf("%lf", &d);

    printf("\n��������� ��������:\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %.2f\n", f);
    printf("double d = %.2e\n", d);

    printf("������ 1 �\n");
    printf("����� �����: %d\n", (int)f);
    printf("������������: %.5f\n", f - (int)f);

    printf("������ 1 �\n");
    printf("����� �����: %d\n", c);
    printf("������������: %.5f\n", f - (int)f);
    printf("����������������� ���: %X\n", c);
    printf("���������� ���: %d\n", c);

    printf("������ 1 �\n");
    printf("���������� ���: %d\n", n);
}