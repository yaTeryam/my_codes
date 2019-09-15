//быстра€ сортировка массива, произвольное числа элементов в массиве, случайные числа в массиве.
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
	//глобальные настройки

	int p ;
	printf("¬едите необходимое кол-во чисел: \n");
	scanf_s("%d", &p);
	//запрашиваетс€ необходимое число элементов в массиве

	int*arr = new int[p];


	//массив

	for (int m = 0; m < p; m++) {
		arr[m] = rand()% 1005;
		printf("„исло под номером %d равно: %d \n", m+1, arr[m]);

	}

	printf("ћассив с элементами : ");

	for (int i = 0; i < p; i++) {
		printf("%d ", arr[i]);
	}
	//генераци€ случайных чисел в элементах массива+ вывод случайных чисел

	qsort(arr,p, sizeof(int), sort_number);
	printf("\n ¬ывожу отсортированный массив:\n");
	//вывод случайных чисел+ сортировка 

	for (int i = 0; i < p; i++) {
		printf("%d ", arr[i]);
	}
	//вывод отсортированного массива
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
//сортировка 