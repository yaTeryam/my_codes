#include <stdio.h>
#include <locale.h>
#include <conio.h>

long long number = 0;
long long step = 1;

int flag = 0; 

int algo1() {
	number = step * 20;
	printf("Число: ");
	printf("%d\n", number);


	if(number%19 ==0){
		if (number % 18 == 0) {
			if (number % 17 == 0) {
				if (number % 16 == 0) {
					if (number % 15 == 0) {
						if (number % 14 == 0) {
							if (number % 13 == 0) {
								if (number % 12 == 0) {
									if (number % 11 == 0) {
										flag = 1;
									}else {step++;}
								}else { step++; }
							}else { step++; }
						}else { step++; }
					}else { step++; }
				}else { step++; }
			}else {step++;}
		}else {step++;}
	}else {step++;}
	return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	while (flag == 0) {
		algo1();
	}
	printf("Answer: ");
	printf("%d", number);

	_getch();
	return 0;
}