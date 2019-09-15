#include <stdio.h>
#include <conio.h>
#include <locale>

int main() {
	setlocale(LC_ALL, "ru");

	int arr[3][3];
	int i, j;
	for (i = 0; i < 2; i++); {
		for (j = 0; j < 2; j++) {
			arr[i][j] = 0;
		}
	}

}