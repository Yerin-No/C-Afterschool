#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}

	return 0;
}