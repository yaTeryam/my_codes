//Функция копирует Си-строку, включая завершающий нулевой символ в строку назначения
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define n 30

char *strcpy1(char arrayText[], char dest[]) {
	char er[n] = "Dlina stroki prevushaet";
	if (n < strlen(arrayText)) return er;
	else {
		int i = 0;
		for (; i < strlen(arrayText); i++)
			dest[i] = arrayText[i];
		dest[i] = '\0';
		return dest;
	}
}
char *strcpy2(char arrayText[], char dest[]) {
	char er [n] = "Dlina stroki prevushaet";
	if (n < strlen(arrayText)) return er;
	int i = 0;
	while (i < strlen(arrayText)) {
		dest[i] = arrayText[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
char *strcpy3(char *TextPoint, char *DestPoint) {
	char *destPtr = DestPoint;
	char er[n] = "Dlina stroki prevushaet";
	if (n < strlen(TextPoint)) return er;
	while (*DestPoint++ = *TextPoint++);
	*(DestPoint) = 0;
	return destPtr;
}
char* strcpy4(char *TextPoint, char *DestPoint) {
	char *destPtr = DestPoint;
	char er[n] = "Dlina stroki prevushaet";
	if (n < strlen(TextPoint)) return er;
	for (; *TextPoint != 0; )
		*DestPoint++ = *TextPoint++;
	*DestPoint = 0;
	return destPtr;
}

int main() {
	printf("\n Test \n");
	char a[n] = "Hello";
	char b[n] = "Hell";
	char c[n] = "He";
	char d[n] = " ";
	printf("strcpy1\n");
	printf("strcpy1(\*%s\",\"%s\)=%i\n", a, a, strcpy1(a, a));
	printf("strcpy1(\*%s\",\"%s\)=%i\n", a, b, strcpy1(a, b));
	printf("strcpy1(\*%s\",\"%s\)=%i\n", b, a, strcpy1(b, a));
	printf("strcpy1(\*%s\",\"%s\)=%i\n", a, c, strcpy1(a, c));
	printf("strcpy1(\*%s\",\"%s\)=%i\n", c, a, strcpy1(c, a));
	printf("strcpy1(\*%s\",\"%s\)=%i\n", a, d, strcpy1(a, d));
	printf("strcpy1(\*%s\",\"%s\)=%i\n", d, a, strcpy1(d, a));
	printf("strcpy1(\*%s\",\"%s\)=%i\n", d, d, strcpy1(d, d));
	printf("strcpy2\n");
	printf("strcpy2(\*%s\",\"%s\)=%i\n", a, a, strcpy2(a, a));
	printf("strcpy2(\*%s\",\"%s\)=%i\n", a, b, strcpy2(a, b));
	printf("strcpy2(\*%s\",\"%s\)=%i\n", b, a, strcpy2(b, a));
	printf("strcpy2(\*%s\",\"%s\)=%i\n", a, c, strcpy2(a, c));
	printf("strcpy2(\*%s\",\"%s\)=%i\n", c, a, strcpy2(c, a));
	printf("strcpy2(\*%s\",\"%s\)=%i\n", a, d, strcpy2(a, d));
	printf("strcpy2(\*%s\",\"%s\)=%i\n", d, a, strcpy2(d, a));
	printf("strcpy2(\*%s\",\"%s\)=%i\n", d, d, strcpy2(d, d));
	printf("strcpy3\n");
	printf("strcpy3(\*%s\",\"%s\)=%i\n", a, a, strcpy3(a, a));
	printf("strcpy3(\*%s\",\"%s\)=%i\n", a, b, strcpy3(a, b));
	printf("strcpy3(\*%s\",\"%s\)=%i\n", b, a, strcpy3(b, a));
	printf("strcpy3(\*%s\",\"%s\)=%i\n", a, c, strcpy3(a, c));
	printf("strcpy3(\*%s\",\"%s\)=%i\n", c, a, strcpy3(c, a));
	printf("strcpy3(\*%s\",\"%s\)=%i\n", a, d, strcpy3(a, d));
	printf("strcpy3(\*%s\",\"%s\)=%i\n", d, a, strcpy3(d, a));
	printf("strcpy3(\*%s\",\"%s\)=%i\n", d, d, strcpy3(d, d));
	printf("strcpy4\n");
	printf("strcpy4(\*%s\",\"%s\)=%i\n", a, a, strcpy4(a, a));
	printf("strcpy4(\*%s\",\"%s\)=%i\n", a, b, strcpy4(a, b));
	printf("strcpy4(\*%s\",\"%s\)=%i\n", b, a, strcpy4(b, a));
	printf("strcpy4(\*%s\",\"%s\)=%i\n", a, c, strcpy4(a, c));
	printf("strcpy4(\*%s\",\"%s\)=%i\n", c, a, strcpy4(c, a));
	printf("strcpy4(\*%s\",\"%s\)=%i\n", a, d, strcpy4(a, d));
	printf("strcpy4(\*%s\",\"%s\)=%i\n", d, a, strcpy4(d, a));
	printf("strcpy4(\*%s\",\"%s\)=%i\n", d, d, strcpy4(d, d));

	_getch();
	return 0;

}