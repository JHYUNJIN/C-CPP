#include<stdio.h>

int main(void) {
	int i;
	for (i = 0; i < 3; i++) {
		int num = 0;
		num++;
		printf("%d��° �ݺ�, �������� num�� %d\n", i + 1, num);
	}
	// 1��° num�� 1, 2��° num�� 1, 3��° num�� 1 

	if (i == 3) {
		int num = 7;
		num++;
		printf("if�� �ȿ� �����ϴ� �������� num�� %d\n", num);
	}
	// num=8

	return 0;
}