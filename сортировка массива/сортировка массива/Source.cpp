//������� ���������� �������, ������������ ����� ��������� � �������, ��������� ����� � �������.
#include <stdio.h>
#include <stdlib.h> 
#include <locale>
#include <string.h>
#include <conio.h> 

int sort_number(const void *a, const void *b);

int main() 
{
	 system("color 0f");
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	//���������� ���������

	int p ;
	printf("������ ����������� ���-�� �����: \n");
	scanf_s("%d", &p);
	//������������� ����������� ����� ��������� � �������

	int*arr = new int[p];


	//������

	for (int m = 0; m < p; m++) {
		arr[m] = rand()% 1005;
		printf("����� ��� ������� %d �����: %d \n", m+1, arr[m]);

	}

	printf("������ � ���������� : ");

	for (int i = 0; i < p; i++) {
		printf("%d ", arr[i]);
	}
	//��������� ��������� ����� � ��������� �������+ ����� ��������� �����

	qsort(arr,p, sizeof(int), sort_number);
	printf("\n ������ ��������������� ������:\n");
	//����� ��������� �����+ ���������� 

	for (int i = 0; i < p; i++) {
		printf("%d ", arr[i]);
	}
	//����� ���������������� �������
	_getch();
	delete(arr);
	return 0;
}

int sort_number(const void *a, const void *b) 
{
	int x = *(int *)a;
	int y = *(int *)b;
	return x - y;
}
//���������� 