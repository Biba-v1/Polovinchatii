#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include "B.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int ur;
	float a, b, e, c;
	float otv[2];
	printf_s("Какое уравнение из варианта: 1) 2.3^x - 3x^2; или 2) x^3 - 0.1x^2 + 0.4x + 1.2;\n");
	scanf_s("%d", &ur);
	printf_s("Введите начало отрезка: ");
	scanf_s("%f", &a);
	printf_s("Введите конец отрезка: ");
	scanf_s("%f", &b);
	printf_s("Введите Е: ");
	scanf_s("%f", &e);
	
	Bisek(ur, a, b, e, otv);
	printf_s("\n%d-е уравнение,  х = %.4f, d = %.4f", ur, otv[0], otv[1]);
}