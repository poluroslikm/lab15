#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#define N 100
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int lab15task1()
{
	srand(time(0));
	double array[N][N];
	int size1, size2, z;
	printf("Введите длину массива > ");
	scanf("%d", &size1);
	printf("Введите ширину массива > ");
	scanf("%d", &size2);
	for (int i2 = 1; i2 <= size2; i2++)
		for (int i1 = 1; i1 <= size1; i1++)
		{
			array[i1][i2] =1.+ rand() % ((i2+1)); ;
		}
	for (int i1 = 1; i1 <= size1; i1++)
	{
		printf("| "); 
		for (int i2 = 1; i2 <= size2; ++i2)
		{
			printf("%6.3lf ", array[i1][i2]);
		}
		printf("|\n"); 
	}
	z = rand() % size1;
	printf ("%6.3lf ", array[z][2]);
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c;
	printf("Введите номер задания лабораторной ");
	scanf("%c", &c);
	switch (c)
	{
	case '1':
		lab15task1();
		break;
	//case '2':
	//	lab14task2();
	//	break;
	//case '3':
	//	lab14task3();
	//	break;
	default:
		printf("Неизвестная операция.\n");
	}
}