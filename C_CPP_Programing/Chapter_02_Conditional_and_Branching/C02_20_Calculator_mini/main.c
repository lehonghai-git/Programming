﻿#include <stdio.h>

/*
** Input    : Nhập phép tính
** Output   : In kết quả sau khi tính
** IDE      : Visual Studio 2017
*/

int main()
{
	float a, b;
	char key;
	printf("Cac phep tinh: + - * /\n");
	printf("Nhap phep tinh: ");
	scanf("%c", &key);

	printf("Nhap 2 so a, b: ");
	scanf("%f%f", &a, &b);

	if (key == '+') printf("%.2f\n", a + b);
	else if (key == '-') printf("%.2f\n", a - b);
	else if (key == '*') printf("%.2f\n", a * b);
	else if (key == '/') printf("%.2f\n", a / b);
	else printf("Nhap sai phep tinh\n");
	getch();
	return 0;
}