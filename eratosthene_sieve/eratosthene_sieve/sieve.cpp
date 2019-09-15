#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale>

FILE *f;
int main() {
	setlocale(LC_ALL, "Rus");
	errno_t err;

	const int N = 100000;
	char r[N/8 + 1];
	for (int i = 0; i <= N / 8; ++i)
		r[i] = 0xff;
	for (int i = 2; i*i <= N; ++i) {
		if (r[i / 8] & (0x80 >> (i % 8))) {
			for (int d = i + i; d <= N; d += i) {
				r[d / 8] &= ~(0x80 >> d % 8);
			}
		}
	}
	err = fopen_s(&f, "File.html", "w");

		for (int i = 2; i <= N; ++i) {
			if (r[i / 8] & 0x80 >> i % 8)
				fprintf(f, "%d ", i);
			if (i % 100 == 0)
				fprintf(f, "\n");
		}
		fclose(f);

		printf("Ôאיכ דמעמג");

	_getch();
	return 0;
}