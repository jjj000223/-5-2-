#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float kg, pound;
	printf("무게의 단위(kg)를 입력하세요: ");
	scanf_s("%f", &kg);
	pound = 0.453592 / kg;
	printf("%.3fkg은 %.3fpound 입니다.\n", kg, pound);

	return 0;
}