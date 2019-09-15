#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <locale>

const long m = 55;
const long t = m * 1.5;
using namespace std;

long tab[m] = {};
long table[t] = {};


long getRand(int min, int max) {
	static const double fract = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<long>(rand() * fract * (max - min + 1) + min);
}

int filling_out() {
	while (tab[m - 1] == 0) {
		int n = getRand(10000,99999);

		for (int i = 0; i < 55; i++) {
			if (tab[i] == 0) {
				tab[i] = n;
				i = 55;
			}
			else if (tab[i] == n) {
				i = 55;
			}
		}
	}
	return 0;
}



int _hash(int k, int t) {
	int f = (k + 89) % t;
	return f;
}

void show(const long* tab, const long* table, int t) {
	printf("Исходная таблица данных:\n");
	for (int i = 0; i < 55; i++) {

		printf("%d  %5d\t", i, tab[i]);
		if ((i+1) % 4 == 0) {
			std::cout << "\n";
		}
	}

	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	printf("Хеш таблица данных:\n");
	for (int i = 0; i < t; i++) {
		printf("%d  %5d\t", i, table[i]);
		//std::cout << i << " " << table[i] << "  ";
		if ((i+1) % 4 == 0) {
			std::cout << "\n";
		}
	}
}

int main() {
	setlocale(LC_ALL, "rus");
srand(static_cast<long>(time(0)));
filling_out();

	for (int i = 0; i < m; i++) {

		long k = tab[i];
		long h = _hash(k, t);
		long h1 = h;

		if (table[h] == 0) {
			table[h] = k;

		}
		else {
			int j = 0;
				while (table[h] != 0) {
					j++;
					h = (h1 + j * j) % t;

				}
				table[h] = k;
		}

	}

	show(tab, table, t);
	_getch();
	return 0;
}
