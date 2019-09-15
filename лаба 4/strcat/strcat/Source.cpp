
#include <stdio.h>
#include <string.h>
#include <conio.h>
char *strcpy(char dest[],char arrayText[]) {
	char*s=dest;
	while (*s++ = *arrayText++)
		;
	return dest;
}

void strCat1(char *str1, char *str2) {
	for (; *str1; ++str1)
		; 			//��������� 1 � ����� ������
	for (; *str1++ = *str2++;){ 	// ����������� �������� 2-�� ������
		*str1 = *str2;
	}
	return;
}
void strCat2(char *str1, char *str2) {
	while (*str1) str1++;
	while (*str2) {
		*str1 = *str2;
		*str1++;
		*str2++;
	}
	*str1 = 0;
	return;
}
void strCat3(char *str1, char *str2) {
	int str1Len = strlen(str1);
	int i = 0;
	while (str1[i]) { 				//i-����� ������������� ���� 1-�� ������
		i++;
	}
	int j = 0;
	while (str2[j]) {
		str1[j + i] = str2[j]; 			//������� � i-���� ������ ��������� �������� 2-�� ������
		j++;
	}
	str1[j + i] = 0;
	return;
}
void strCat4(char *str1, char *str2) {
	int i, j, str2Len = strlen(str2);
	char *tmp = str1;
	for (i = 0; *str1; i++) str1++; 	//i-����� ������������� ���� 1-�� ������
	for (j = 0; j < str2Len + 1; j++) { 	//��������� j-�� ��-�� ������ 2, ������� � ����� 1-��
		tmp[j + i] = str2[j];
	}
	return;
}
int main()
{
	printf("STRCAT TESTING");
	char s1[100][100] = { "0123456789","","","rererere" }; 	//������� �����
	char s2[100][100] = { "ABC","","pompom","" };
	int n = 4;
	typedef void(*Func) (char *, char*);
	Func f[4] = { strCat1,strCat2,strCat3,strCat4 }; 							//������ ������� ����� Func
	for (int i = 0; i < n; ++i) {
		printf("\n TEST %d \n", i + 1);
		char tmp[100];
		for (int j = 0; j < 4; j++) {
			strcpy(tmp, s1[i]); 												//��������, ����� ������� ����������� �������
			f[j](tmp, s2[i]); 												//�������� �������, �� ���� ������� ���� i-��� ������
			printf("strCat%d(\"%s\", \"%s\")=\"%s\"\n", j + 1, s1[i], s2[i], tmp);
		}
	}
	_getch();
	return 0;
}