#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *file_ptr;
	file_ptr = fopen ("new_file.txt", "w");

	if (file_ptr != NULL) {
		printf("���� ������� ������!\n");
	}
	else {
		fprintf(stderr, "�� ������� ������� ���� ������� ����");
		return 1;
	}
	

	return 0;
}