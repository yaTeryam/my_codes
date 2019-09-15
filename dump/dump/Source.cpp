#include <stdio.h>
#include <conio.h>
void show_byte(char *b) {
	for (int i = 0; i < 8; ++i) {
		printf("%d", *b&(0x80>> i) ? 1 : 0);
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
	double a = 65.3;
	printf("%f\n", a);
	show_mem((char*)&a, sizeof(a));
	_getch();
	return 0;
}