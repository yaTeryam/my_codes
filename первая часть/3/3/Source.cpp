#include <stdio.h>
#include <conio.h>
#include <locale>

void show_byte(char*b) {
	for (int i = 0; i < 8; i++)
		printf("%i", (*b&(0x80 >> i)) ? 1 : 0);
}

int main() {
	setlocale(LC_ALL, "rus");

	int c;
	printf("Введите новое число:\n");
	scanf_s("%d", &c);
	printf("Выберете бит(0..7): ");
	int k;
	scanf_s("%d", &k);
	c |=(0x80 >> k);
	show_byte((char*)&c);

	_getch();
	return 0;


}