// вставка одной строки в другую
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define n 100

char *strins1(char *s1, char *s2, int p) {		//1-переменная, в которую добавляем; 2-переменная,к-ую добавляем;3- число символа, через к-ое добавляем
	int length1 = strlen(s1); 					//присвание к переменным длин строк
	int length2 = strlen(s2);
	if (p < 0)
		p = 0;
	if (p > length1)
		p = length1;
	int length3 = length1 + length2; 				//сумма длин двух строк
	while (length3 - (p + length2)) {
		s1[length3 - 1] = s1[length3 - length2 - 1];
		length3--;
	}
	int i = 0;
	while (i < length2) {
		s1[i + p] = s2[i];
		i++;
	}
	*(s1 + length2 + length1) = 0;
	return s1;
}
char *strins2(char *s1, char *s2, int p) {
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	if (p < 0)
		p = 0;
	if (p > length1)
		p = length1;
	int length3 = length1 + length2;
	for (; length3 - (p + length2); length3--)
		s1[length3 - 1] = s1[length3 - length2 - 1];
	int i = 0;
	for (; i < length2; i++)
		s1[i + p] = s2[i];
	*(s1 + length2 + length1) = 0;
	return s1;
}
char *strins3(char *s1, char *s2, int p) {
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	if (p < 0)
		p = 0;
	if (p > length1)
		p = length1;
	int length3 = length1 + length2;
	for (; length3 - (p + length2); length3--) {
		*(s1 + length3 - 1) = *(s1 + length3 - length2 - 1);
	}
	int i = 0;
	for (; i < length2; i++)
		*(s1 + i + p) = *(s2 + i);
	*(s1 + length2 + length1) = 0;
	return s1;
}

char *strins4(char *s1, char *s2, int p) {
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	if (p < 0)
		p = 0;
	if (p > length1)
		p = length1;
	int length3 = length1 + length2;
	while (length3 - (p + length2)) {
		*(s1 + length3 - 1) = *(s1 + length3 - length2 - 1);
		length3--;
	}
	int i = 0;
	while (i < length2) {
		*(s1 + i + p) = *(s2 + i);
		i++;
	}
	*(s1 + length2 + length1) = 0;
	return s1;
}
int main() {
	char s1[n] = "Programming";
	char s[n] = "119";
	printf("\tTest1\n");
	printf("Initial string= \"%s\"\n", s1);
	printf("Insertion string=\"%s\"\n", s);
	int p = 200; // position of insert
	int length = strlen(s1);
	if (n < length + strlen(s) + 1)  printf("size of string is exceeded");
	else {
		if (p > length) printf("p> length of initial string, so p replaced by %d\n", length, length);
		if (p < 0) printf("p<0, so p replaced by 0\n");
		printf("strins1(%d)= %s\n", p, strins1(s1, s, p));
		char s2[] = "Programming";
		printf("strins2(%d)= %s\n", p, strins2(s2, s, p));
		char s3[] = "Programming";
		printf("strins3(%d)= %s\n", p, strins3(s3, s, p));
		char s4[] = "Programming";
		printf("strins4(%d)= %s\n", p, strins3(s4, s, p));
	}
	char s12[n] = "Programming";
	printf("\tTest2\n");
	printf("Initial string= \"%s\"\n", s12);
	printf("Insertion string=\"%s\"\n", s);
	int p2 = -200; // position of insert
	int length2 = strlen(s12);
	if (n < length2 + strlen(s) + 1)  printf("size of string is exceeded");
	else {
		if (p2 > length2) printf("p> length of initial string, so p replaced by %d\n", length2, length2);
		if (p2 < 0) printf("p<0, so p replaced by 0\n");
		printf("strins1(%d)= %s\n", p2, strins1(s12, s, p2));
		char s22[] = "Programming";
		printf("strins2(%d)= %s\n", p2, strins2(s22, s, p2));
		char s32[] = "Programming";
		printf("strins3(%d)= %s\n", p2, strins3(s32, s, p2));
		char s42[] = "Programming";
		printf("strins4(%d)= %s\n", p2, strins3(s42, s, p2));
	}
	char s13[n] = "Programming";
	printf("\tTest3\n");
	printf("Initial string= \"%s\"\n", s13);
	printf("Insertion string=\"%s\"\n", s);
	int p3 = 2; // position of insert
	int length3 = strlen(s13);
	if (n < length3 + strlen(s) + 1)  printf("size of string is exceeded");
	else {
		if (p3 > length3) printf("p> length of initial string, so p replaced by %d\n", length3, length3);
		if (p3 < 0) printf("p<0, so p replaced by 0\n");
		printf("strins1(%d)= %s\n", p3, strins1(s13, s, p3));
		char s23[] = "Programming";
		printf("strins2(%d)= %s\n", p3, strins2(s23, s, p3));
		char s33[] = "Programming";
		printf("strins3(%d)= %s\n", p3, strins3(s33, s, p3));
		char s43[] = "Programming";
		printf("strins4(%d)= %s\n", p3, strins3(s43, s, p3));
	}
	char s14[n] = "Programming and";
	_getch();
	return 0;
}