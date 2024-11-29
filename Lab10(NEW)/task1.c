#include <locale.h>
#include <stdio.h>
#include <math.h>
double F1(double x) {
	double y;
	if (x <= 3)
	{
		y = pow(x, 2) - 3 * x + 9;
	}
	else {

		y = 1 / (pow(x, 3) + 3);
	}
}
double F2(double x)
{
	double y;
	y = x * exp(sin(pow(x, 2)));
}
int main(void)
{
	setlocale(LC_ALL, "RUS");
	double x;
	printf("Введите x:");
	scanf_s("%lf", &x);
	printf("F1(x)=%lf , F2(x)=%lf\n", F1(x), F2(x));
	printf("Произведение функций = %lf\n", F1(x) * F2(x));
	printf("Разность квадратов = %lf\n", pow(F1(x), 2) - pow(F2(x), 2));
	printf("Удвоенная сумма = %lf\n", pow(F1(x) + F1(x), 2));
}