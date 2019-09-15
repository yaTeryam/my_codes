#include <stdio.h>
#include <conio.h>
#include <locale.h>
void show_byte(char *b) {
	for (int i = 0; i < 8; ++i) {
		printf("%d", *b&(0x80 >> i) ? 1 : 0);
	}

}
void show_mem(char *b, int sz) {
	for (int i = 0; i < sz; ++i) {
		show_byte(b++);
		printf(" ");
	}
	printf("\n");
};

int main() {
	setlocale(LC_ALL, "rus");

	int i = -9;
	float f = -65.3;
	double d = -65.35;
	long l = -654;
	long long ll = -6543;



	printf("%d\n", i);
	show_mem((char*)&i, sizeof(i));
	printf("%f\n", f);
	show_mem((char*)&f, sizeof(f));
	printf("%f\n", d);
	show_mem((char*)&d, sizeof(d));
	printf("%d\n", l);
	show_mem((char*)&l, sizeof(l));
	printf("%d\n", ll);
	show_mem((char*)&ll, sizeof(ll));





	_getch();
	return 0;
}