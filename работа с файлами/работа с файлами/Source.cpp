#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *file_ptr;
	file_ptr = fopen ("new_file.txt", "w");

	if (file_ptr != NULL) {
		printf("Файл успешно создан!\n");
	}
	else {
		fprintf(stderr, "Не удалось создать либо открыть файл");
		return 1;
	}
	

	return 0;
}