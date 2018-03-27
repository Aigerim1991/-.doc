#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h"
int l;
#define length 10
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &l);
		switch (l)
		{
		/*case 1:
		{
			int d;
			printf("введите дату");
			scanf("%d\n", &d);
		

		}
		break;*/
		case 2:
		{
			//30.	Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b. Пользователь вводит a и  b. Проил-люстрируйте работу функции примером.
			int a, b;
			printf("Введите а: ");
			scanf("%d", &a);
			printf("Введите b: ");
			scanf("%d", &b);
			printf("сумму всех чисел в диапазоне от a до b.: %d\n", Sum(a,b));
		}
		break;
		case 3:
		{
			//29.	Создать функцию, позволяющую удалять блок элементов, начиная с произвольного индекса массива.
			int mass[10];
			Printmass(mass, length);
			PrintArray(mass, length);
			Deletemass(mass, length);
			PrintArray(mass, length);

		}
		break;
		case 4:
		{
			//28.	Создать функцию, позволяющую вставлять блок элементов, начиная с произвольного индекса массива.
			int mass[10], k=0;
			Printmass(mass, length);		
			PrintArray(mass, length);
			Vstavka(mass, length, k);
	
		}
		break;
		case 5:
		{
			//26.	Написать функцию, которая получает указатель на двумерный массив и его размер,
			//и возвращает среднее арифметическое эле-ментов массива, а также количество чётных и нечётных элементов, используя механизм ссылок.
			int mass[4][4] = { {1,2,3,10},{41,45,4,1} }, a = 4, b = 4;
			int chet = 0;
			int nechetnoe = 0;
			int srednoe = 0;
			int *m=DvyxSredMass(*mass, a, b, &chet, &nechetnoe, &srednoe);
			printf("Четное %d, Нечетное %d,среднее арифметическое эле-ментов массива %d\n", chet, nechetnoe, *m);
		}
		break;
		case 6:
		{
			//24.	Написать Функции для распечатки массивов, как одномерных, так и двумерных.
			int mass[10];
			int mas[4][4] = { { 1,2,3,10 },{ 41,45,4,1 } }, a = 4, b = 4;
			Printmass(mass, length);
			PrintArray(mass, length);
			 PrintarrMass(*mas, a , b );
		}
		break;
		default:
			break;
		}
	} while (l > 0);



}