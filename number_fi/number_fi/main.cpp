#include <iostream>
#include <conio.h>
#include <locale>

int sum = 0;
long up_boarder = 4000000;
int flag = 0;
int i_first = 1;
int i_second = 2;
int i = 0;

int generation_number() {
	i = i_first + i_second;
	i_first = i_second;
	i_second = i;
	printf("Сгенерировалось число: %d\n", i);
	return 0;
}

int summ() {
	if (i % 2 == 0) {
		sum = sum + i;
		printf("Число сложенно!\n");
	}
	else {
		printf("Число %d не чётное\n", i);
	}
	return 0;
}

int cheks_and_summ() {
	if (i > up_boarder) {
		flag = 1;
		printf("Преодоленна верхняя граница\n");
	}
	else {
		summ();
	}
	return 0;
}



int main() {
	setlocale(LC_ALL, "rus");
	while (flag == 0) {
		generation_number();
		cheks_and_summ();
	}
	printf("Ответ : %d", sum);
	_getch();
	return 0;
}