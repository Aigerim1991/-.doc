#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h" 
int i, j;
//enum Date {day,month,year};
//int D(Date d)
//{
//	setlocale(LC_ALL, "rus");
//	//31.	**�������� �������, ������� ��������� ����(����, �����, ���) � ���������� ����� ��� ������, �������� ������������� ��� ����. 
//	//1 � �����������, 2 � �������, 3 � �����, 4 � �������, 5 � �������, 6 � �������, 7 � �����������.
//	//��� ���� ������� ������ ���������� �������� enum.������������ �� ���������� ���������� ���������� ����, �� ����� ��� ������. 
//	//(�������� ��� ��� ����� �����������.�������� � ������� : 1. ��� ���� ������� ������� ���������� ��������� �� ������; 
//	//2. ������� �������� ��� �������������� ������� �� ��������, ���� ������ ��� ��� ������ enum - �, ���������� ��� ���������� �����)
//	switch (d)
//	{
//	case day:
//	{
//		switch (day)
//		{
//		case 1:
//			return printf("�����������");
//			break;
//		case 2:
//			return printf("�������");
//			break;
//		case 3:
//			return printf("�����");
//			break;
//		
//		}
//	}
//		break;
//	case month:
//		break;
//	case year:
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
int Sum(int a, int b) 
{

	if (b == a - 1) 
		return 0;
	return b + Sum(a, b - 1);
}
int Printmass(int *mass, int  length)
{

	for ( i = 0; i < length; i++)
	{
		mass[i] = 1 + rand() % 100;
		
	}
	
	return 0;
}
int PrintArray(int *mass, int  length)
{
	for (i = 0; i < length; i++)
	{
		printf("%d\t", mass[i]);
	}
		
	printf("\n");
	return 0;
}
int Deletemass(int *mass, int  length)
{
	for ( i= 0; i < length; i++)
	{
		mass[i] = 0;
	}
	return 0;
}
int Vstavka(int *mass, int  length, int k)
{
	for (i = 0; i < length; i++)
	{
		k = mass[i];
		    printf("%d\t", k);
	}

	printf("\n");

		return 0;
}
int *DvyxSredMass(int *mass, int len1, int len2, int *chetnoe, int *nechetnoe, int *srednoe)
{
	for ( i = 0; i < len1; i++)
	{
		for ( j = 0; j < len2; j++)
		{
			if (*(mass + i * 4 + j) % 2 == 0)
				*chetnoe = *chetnoe + 1;
			else *nechetnoe = *nechetnoe + 1;
			*srednoe += *(mass + i * 4 + j);
		}
	}
	*srednoe = *srednoe / (len1+len2);
	return &*srednoe;
}

void PrintarrMass(int *mass, int len1, int len2)
{
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			printf("%d\t", *(mass + i * 4 + j));
		}
			printf("\n");
	}

	
}
