#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int A, B, C;

    int condition;


    printf("=== ������� �������� ������� �������===\n");

    printf("������� ��� ����� ����� (������� 1, ������� 2 , ������� 3):");

    scanf("%d %d% d", &A, &B, &C);

    condition = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0) );

    printf("������ �������� (1 - ��, 0 - ���): %d\n", condition);

    return 0;

}