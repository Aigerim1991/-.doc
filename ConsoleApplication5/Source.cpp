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
		printf("������� ����� �������: ");
		scanf("%d", &l);
		switch (l)
		{
		/*case 1:
		{
			int d;
			printf("������� ����");
			scanf("%d\n", &d);
		

		}
		break;*/
		case 2:
		{
			//30.	�������� ����������� �������, ������� ��������� ����� ���� ����� � ��������� �� a �� b. ������������ ������ a �  b. �����-����������� ������ ������� ��������.
			int a, b;
			printf("������� �: ");
			scanf("%d", &a);
			printf("������� b: ");
			scanf("%d", &b);
			printf("����� ���� ����� � ��������� �� a �� b.: %d\n", Sum(a,b));
		}
		break;
		case 3:
		{
			//29.	������� �������, ����������� ������� ���� ���������, ������� � ������������� ������� �������.
			int mass[10];
			Printmass(mass, length);
			PrintArray(mass, length);
			Deletemass(mass, length);
			PrintArray(mass, length);

		}
		break;
		case 4:
		{
			//28.	������� �������, ����������� ��������� ���� ���������, ������� � ������������� ������� �������.
			int mass[10], k=0;
			Printmass(mass, length);		
			PrintArray(mass, length);
			Vstavka(mass, length, k);
	
		}
		break;
		case 5:
		{
			//26.	�������� �������, ������� �������� ��������� �� ��������� ������ � ��� ������,
			//� ���������� ������� �������������� ���-������ �������, � ����� ���������� ������ � �������� ���������, ��������� �������� ������.
			int mass[4][4] = { {1,2,3,10},{41,45,4,1} }, a = 4, b = 4;
			int chet = 0;
			int nechetnoe = 0;
			int srednoe = 0;
			int *m=DvyxSredMass(*mass, a, b, &chet, &nechetnoe, &srednoe);
			printf("������ %d, �������� %d,������� �������������� ���-������ ������� %d\n", chet, nechetnoe, *m);
		}
		break;
		case 6:
		{
			//24.	�������� ������� ��� ���������� ��������, ��� ����������, ��� � ���������.
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