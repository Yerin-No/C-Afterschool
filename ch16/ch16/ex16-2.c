#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("메모리가 부족합니다.\n");
		exit(1);
	}

	return 0;
}