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
	strcpy(s1.name, "홍길동");
	s1.grade = 2.7;
	printf("학번:%d\n", s1.num);
	printf("이름:%d\n", s1.name);
	printf("학점:%d\n", s1.grade);

	return 0;
}