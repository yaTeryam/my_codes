#include <stdio.h>
#include <string.h>
#include <conio.h>
#define n 100

int strlen(char ArrayText[]) {  
	int i = 0;
	while (ArrayText[i]) {
		i++;
	}
	return i;
}

int strcmp1(char*a, char*b) {
	for (int i = 0; i < strlen(a) || i < strlen(b); i++) 
		if (a[i] > b[i]) return 1;
		else if (a[i] < b[i]) return -1;
	return 0;
}

int strcmp2(char*a, char*b){
while (*a&&*a == *b) 
	a++, b++;
if (*a != *b)
return *a > *b ? 1 : -1;
return *b ? -1 : 0;
}

int strcmp3(char*a, char*b) {
	for (; *a; a++, b++)
		if (*a != *b)
			return *a > *b ? 1 : -1;
	return *b?-1:0;
}

int strcmp4(char*a, char*b) {
	return *a != *b ? (*a > *b ? 1 : -1) : *a == '\0' ? 0 : strcmp4(a + 1, b + 1);
}

int main() {
	printf("\n Test \n");
	char a[n] = "01234";
	char b[n] = "031";
	char c[n] = "01";
	char d[n] = "";
	printf("strcmp1\n");
	printf("strcmp1(\"%s\",\"%s\")=%i\n", a, a, strcmp1(a, a));
	printf("strcmp1(\"%s\",\"%s\")=%i\n", a, b, strcmp1(a, b));
	printf("strcmp1(\"%s\",\"%s\")=%i\n", b, a, strcmp1(b, a));
	printf("strcmp1(\"%s\",\"%s\")=%i\n", a, c, strcmp1(a, c));
	printf("strcmp1(\"%s\",\"%s\")=%i\n", c, a, strcmp1(c, a));
	printf("strcmp1(\"%s\",\"%s\")=%i\n", a, d, strcmp1(a, d));
	printf("strcmp1(\"%s\",\"%s\")=%i\n", d, a, strcmp1(d, a));
	printf("strcmp1(\"%s\",\"%s\")=%i\n", d, d, strcmp1(d, d));
	printf("strcmp2\n");
	printf("strcmp2(\*%s\",\"%s\)=%i\n", a, a, strcmp2(a, a));
	printf("strcmp2(\*%s\",\"%s\)=%i\n", a, b, strcmp2(a, b));
	printf("strcmp2(\*%s\",\"%s\)=%i\n", b, a, strcmp2(b, a));
	printf("strcmp2(\*%s\",\"%s\)=%i\n", a, c, strcmp2(a, c));
	printf("strcmp2(\*%s\",\"%s\)=%i\n", c, a, strcmp2(c, a));
	printf("strcmp2(\*%s\",\"%s\)=%i\n", a, d, strcmp2(a, d));
	printf("strcmp2(\*%s\",\"%s\)=%i\n", d, a, strcmp2(d, a));
	printf("strcmp2(\*%s\",\"%s\)=%i\n", d, d, strcmp2(d, d));
	printf("strcmp3\n");
	printf("strcmp3(\*%s\",\"%s\)=%i\n", a, a, strcmp3(a, a));
	printf("strcmp3(\*%s\",\"%s\)=%i\n", a, b, strcmp3(a, b));
	printf("strcmp3(\*%s\",\"%s\)=%i\n", b, a, strcmp3(b, a));
	printf("strcmp3(\*%s\",\"%s\)=%i\n", a, c, strcmp3(a, c));
	printf("strcmp3(\*%s\",\"%s\)=%i\n", c, a, strcmp3(c, a));
	printf("strcmp3(\*%s\",\"%s\)=%i\n", a, d, strcmp3(a, d));
	printf("strcmp3(\*%s\",\"%s\)=%i\n", d, a, strcmp3(d, a));
	printf("strcmp3(\*%s\",\"%s\)=%i\n", d, d, strcmp3(d, d));
	printf("strcmp4\n");
	printf("strcmp4(\*%s\",\"%s\)=%i\n", a, a, strcmp4(a, a));
	printf("strcmp4(\*%s\",\"%s\)=%i\n", a, b, strcmp4(a, b));
	printf("strcmp4(\*%s\",\"%s\)=%i\n", b, a, strcmp4(b, a));
	printf("strcmp4(\*%s\",\"%s\)=%i\n", a, c, strcmp4(a, c));
	printf("strcmp4(\*%s\",\"%s\)=%i\n", c, a, strcmp4(c, a));
	printf("strcmp4(\*%s\",\"%s\)=%i\n", a, d, strcmp4(a, d));
	printf("strcmp4(\*%s\",\"%s\)=%i\n", d, a, strcmp4(d, a));
	printf("strcmp4(\*%s\",\"%s\)=%i\n", d, d, strcmp4(d, d));

	_getch();
	return 0;

}