#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define n 100
int strlen1(char ArrayText[]) {   //strlen1
	int i = 0;
	for (; ArrayText[i]; i++);
	return i;
}
int strlen2(char*text)
{
	int i = 0;
	while (text[i])
	{
		i++;
	}
	return i;
}
int strlen3(char *TextPoint) {  //strlen3
	int i = 0;
	for (; *TextPoint != 0; i++, TextPoint++)
		;
	return i;
}
int strlen4(char *TextPoint) {  //strlen4
	char*start = TextPoint;
	while (*TextPoint) {
		
			TextPoint++;
	}
	return TextPoint-start;
}

int main() {
	char text1[n] = "Pro-119";
	printf("\tTest1\n");       //Test1
	printf("strlen1(\"%s\") = %d \n", text1, strlen1(text1));
	printf("strlen2(\"%s\") = %d \n", text1, strlen2(text1));
	printf("strlen3(\"%s\") = %d \n", text1, strlen3(text1));
	printf("strlen4(\"%s\") = %d \n", text1, strlen4(text1));
	char text2[n] = "";
	printf("\tTest2\n");      //Test2
	printf("strlen1(\"%s\") = %d \n", text2, strlen1(text2));
	printf("strlen2(\"%s\") = %d \n", text2, strlen2(text2));
	printf("strlen3(\"%s\") = %d \n", text2, strlen3(text2));
	printf("strlen4(\"%s\") = %d \n", text2, strlen4(text2));
	getchar();
	return 0;
}


/*


int main() {
	char text1[n] = "Hello230010";
	printf("\tTest1\n");       //Test1
	printf("strlen1(\"%s\") = %d \n", text1, strlen1(text1));
	printf("strlen2(\"%s\") = %d \n", text1, strlen2(text1));
	printf("strlen3(\"%s\") = %d \n", text1, strlen3(text1));
	printf("strlen4(\"%s\") = %d \n", text1, strlen4(text1));
	char text2[n] = "";
	printf("\tTest2\n");      //Test2
	printf("strlen1(\"%s\") = %d \n", text2, strlen1(text2));
	printf("strlen2(\"%s\") = %d \n", text2, strlen2(text2));
	printf("strlen3(\"%s\") = %d \n", text2, strlen3(text2));
	printf("strlen4(\"%s\") = %d \n", text2, strlen4(text2));
	getchar();
	return 0;
}
*/