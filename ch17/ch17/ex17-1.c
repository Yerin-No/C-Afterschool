#include<stdio.h>
struct student {
	int num;
	char name[20];
	double grade;
};
struct node {
	int x;
	int y;
};

int main(void) {
	struct student s1;
	s1.num - 1;
	strcpy(s1.name, "ȫ�浿");
	s1.grade = 2.7;
	printf("�й�:%d\n", s1.num);
	printf("�̸�:%d\n", s1.name);
	printf("����:%d\n", s1.grade);

	return 0;
}