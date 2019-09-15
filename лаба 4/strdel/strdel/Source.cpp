#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
//STRDEL

void strdel1(char*s, int p, int k) {	
	int lens = strlen(s); 				//ПРИСВАИВАНИЕ К ПЕРЕМЕННОЙ ДЛИНЫ СТРОКИ
	if (p > lens) 						//если число cимволов больше, с которого надо начать удалять, со строкой  ничего не происходит
		return;
	if (p + k > lens) {						//если больше, то удаляет то количество символов, сколько есть с р
		s[p] = '\0'; return;
	}
	for (int i = p + k; i < lens; ++i) 		//перенос "хвоста" строки на место, которое удалено,но сам "хвост" не удаляется
		s[i - k] = s[i];
	s[lens - k] = '\0';					//обрезка конца
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
	s += p;							//указатель ставится на место, откуда надо удалять
	char*s1 = s + k;				//еще один указатель ставится на конец куска, который надо удалить
	while (*s++ = *s1++);			//конец перетаскивается в серединку вместе с терминальным нулем
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