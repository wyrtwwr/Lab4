#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    setlocale(LC_ALL, "Russian");

    int n;

    printf("������� ����� �����: ");
    scanf("%d", &n);
    int last = (int)n % 10;
    int first = (int)n / 100;

    int mid = (n / 10) % 10;  
    int sumaa = last + first + mid;

    printf("��������� ����� %d\n",last);
    printf("������ ����� %d\n", first);
    printf("������� ����� %d\n", mid);
    printf("����� ���� %d\n", sumaa);
}