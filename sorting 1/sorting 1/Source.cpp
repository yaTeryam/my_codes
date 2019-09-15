//быстра€ сортировка массива, произвольное числа элементов в массиве, случайные числа в массиве.
#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>
#include <locale>
#include <string.h>
#include <conio.h> 

HANDLE q = GetStdHandle(STD_OUTPUT_HANDLE);
//int sort_number(const void *a, const void *b);

void swap(int&x, int&y) {
	int t = x;
	x = y;
	y = t;
}

int main()
{

	system("color 0f");
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	//глобальные настройки
/*
	int j;
	printf("¬едите необходимое кол-во чисел (от 0 до 99): \n");
	scanf_s("%d", &j);
	//запрашиваетс€ необходимое число элементов в массиве
	//как напр€мую управл€ть числом в массиве?

	int number_mass[100];
	//массив

	for (int m = 1; m <= j; m++) {
		number_mass[m] = rand() % 1000 + 5;
		printf("„исло под номером %d равно: %d \n", m, number_mass[m]);
	}
	//генераци€ случайных чисел в элементах массива+ вывод случайных чисел

	for (int h = 0; h < j - 1; h++) {

		for (int g = 0; g < j - h - 1; j++) {
			if (number_mass[g] > number_mass[g + 1]) {

				int save = number_mass[g];
				number_mass[g] = number_mass[g + 1];
				number_mass[g + 1] = save;
			}
		}
	}
	for (int q = 0; q < j; q++) {
		printf("число : %d", number_mass[q]);
	}
	
		for (int i = 1; i <= j; i++) {
				printf("%d \n", number_mass[i]);
			}
			//вывод отсортированного массива*/

	int p;
	printf("¬едите необходимое кол-во чисел: \n");
	scanf_s("%d", &p);

		
	

	int*arr=new int[p];

	for (int m = 0; m < p; m++) {
		arr[m] = rand() % 100 + 5;
		printf("„исло под номером %d равно: %d \n", m+1, arr[m]);
	}
	
	int c;
	printf("ћассив arr  с элементами : ");
	
	for (int i = 0; i < p; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	for (int i = 0; i < p; i++) {
		for (int j = i + 1; j < p; j++){
			if (arr[i] > arr[j]) {
				c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
				for (int k = 0; k < p;++k) {
					if (k == j) {
						SetConsoleTextAttribute(q, 9);
					}
					if (k == i) {
						SetConsoleTextAttribute(q, 6);
					}
					printf("%d ",arr[k]);
					SetConsoleTextAttribute(q, 7);
				}
				printf("\n");
			}
		}
		
	}

	/*int k;
	scanf_s("%d",&k);
	
	SetConsoleTextAttribute(q, 9);
	printf("%d ",k);
	SetConsoleTextAttribute(q, 7);
	*/

		_getch();
		delete(arr);
}

