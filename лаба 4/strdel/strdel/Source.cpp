#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//STRDEL

void strdel1(char*s, int p, int k) {	
	int lens = strlen(s); 				//������������ � ���������� ����� ������
	if (p > lens) 						//���� ����� c������� ������, � �������� ���� ������ �������, �� �������  ������ �� ����������
		return;
	if (p + k > lens) {						//���� ������, �� ������� �� ���������� ��������, ������� ���� � �
		s[p] = '\0'; return;
	}
	for (int i = p + k; i < lens; ++i) 		//������� "������" ������ �� �����, ������� �������,�� ��� "�����" �� ���������
		s[i - k] = s[i];
	s[lens - k] = '\0';					//������� �����
	return;
}
void strdel2(char*s, int p, int k) {
	int lens = strlen(s);
	if (p >= lens || k == 0)
		return;
	if (p + k >= lens) {
		s[p] = 0;
		return;
	}
	for (int i = p + k; i <= lens; ++i)
		s[i - k] = s[i];
	return;
}

void strdel3(char*s, int p, int k)
{
	int lens = strlen(s);
	if (p > lens)
		return;
	if (p + k >= lens) {
		s[p] = '\0';
		return;
	}
	s += p;							//��������� �������� �� �����, ������ ���� �������
	char*s1 = s + k;				//��� ���� ��������� �������� �� ����� �����, ������� ���� �������
	while (*s++ = *s1++);			//����� ��������������� � ��������� ������ � ������������ �����
}
void strdel4(char*s, int p, int k)
{
	int lens = strlen(s);
	if (p > lens)
		return;
	if (p + k >= lens) {
		s[p] = '\0'; return;
	}
	int i = p + k;
	while (i <= lens) {
		s[i - k] = s[i];
		++i;
	}
	s[lens - k] = '\0';
	return;
}

int main()
{
	void(*strdels[4])(char*, int, int) = { strdel1,strdel2,strdel3,strdel4 };
	printf("strdel \n");
	int s[3] = { 2,0,6 };
	for (int i = 0; i < 4; i++) {
		for (int z = 0; z < 3; z++)
			for (int j = 0; j < 4; j++) {
				char strdel[4][40] = { "12345678910"," 123456 ","012345 ","" };
				printf("TEST strdel %i (%s,%i,%i)=", j + 1, strdel[i], s[z], s[z] + 3);
				strdels[j](strdel[i], s[z], s[z] + 3);
				printf("'%s'\n", strdel[i]);
			}
	}
	_getch();
	return 0;
}