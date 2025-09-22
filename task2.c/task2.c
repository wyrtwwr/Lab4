#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    setlocale(LC_ALL, "Russian");

    int a = 11;
    int b = 3;
    int x;
    double z;
    float y;
    

    x = (a / b);
    z = (double)a / b;
    y = (float)a / b;


    printf("a = %d \nb = %d\n", a, b);

    printf("int = %d\n", x);
    printf("double = %.5e\n", z);
    printf("float = %.5f\n", y);
}