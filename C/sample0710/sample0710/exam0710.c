#include<stdio.h>

struct point{
	int x; // ���� ����ü �̸��� �޸��� �ּҰ� �Ҵ�
	int y;
};
struct student{
	char name[15];
	struct point* link;
};

int main(void) {
	struct student std1 = { "Kim",NULL };
	struct student std2 = { "Lee",NULL };

	struct point p1 = { 30,40 };
	struct point p2 = { 60,80 };

	std1.link = &p1;
	std2.link = &p2;
	printf("%s %d %d\n", std1.name, std1.link->x, std1.link->y);
	printf("%s %d %d\n", std2.name, std2.link->x, std2.link->y);

	return 0;

}