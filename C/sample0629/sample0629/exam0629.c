#include<stdio.h>

/*
int main(void) {
	int i, j ;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
*/


/*
int main(void) {
	int i = 0;
	while (i < 5) {
		printf("C-Programming\n");
		i++;
	}
}
*/

/*
int main(void) {
	int i=0,sum = 0;
	while (i < 10) {
		sum = sum + i+1;
		i++;
	}
	printf("1���� 10������ ���� : %d\n",sum);
}
*/

/*
int main(void) {
	int num = 100;
	while (num == 200) {
		printf("�� ������ ������ �ɱ�� ?");
	}
	do {
		printf("�� ������ ������ �ɱ�� ?");
	} while (num == 200);

	return 0;
}
*/

/*
int main(void) {

	int a = 0, b = 0, c = 0, d = 0;
	int sum ;

	printf("ù ��° ���� �Է� : ");
	scanf_s("%d", &a);
	printf("ù ��° ���� �Է� : ");
	scanf_s("%d", &b);
	printf("ù ��° ���� �Է� : ");
	scanf_s("%d", &c);
	printf("ù ��° ���� �Է� : ");
	scanf_s("%d", &d);

	sum = a + b + c + d;

	printf("���� : %d",sum);

	return 0;
}
*/

/*
int main(void) {
	int arData[4];
	int sum;

	printf("ù��° ���� �Է� : ");
	scanf_s("%d", &arData[0]);
	printf("�ι�° ���� �Է� : ");
	scanf_s("%d", &arData[1]);
	printf("����° ���� �Է� : ");
	scanf_s("%d", &arData[2]);
	printf("�׹�° ���� �Է� : ");
	scanf_s("%d", &arData[3]);

	sum = arData[0] + arData[1] + arData[2] + arData[3];
	printf("���� : %d", sum);

	return 0;
}
*/

/*
int main(void) {
	int arData[4];
	int sum = 0,i=0;

	for (i = 0; i < 4; i++) {
		printf("%d��° ���ڸ� �Է����ּ��� : ", i + 1);
			scanf_s("%d",&arData[i]);
	}
	//sum = arData[0] + arData[1] + arData[2] + arData[3];
	for (i = 0; i < 4; i++) {
		sum+=arData[i];
	}
	printf("���� %d\n", sum);
	
	for (i = 0; i < 4; i++) {
		printf("%d\ ", arData[i]);
	}
*/

/*
int main(void){
	int arData[] = { 10,20,30,40,50,60 };
	int count;

	count = sizeof(arData) / sizeof(int);

	printf("arData�迭�� ������ %d�Դϴ�.\n",count);

	return 0;
}
*/

/*
int main(void) {

	int a = 100;
	int b = 200;
	printf("���� a�� �ּҴ� %x�Դϴ�.\n", &a);
	printf("���� b�� �ּҴ� %x�Դϴ�.\n", &b);

	int arData[3] = { 1,2,3 };
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("arData�迭�� %d��° �ּҴ� %d�Դϴ�.\n", i, &arData[i]);
	}
	printf("arData�迭�� ù��° �ε����� �ּҴ� %x�Դϴ�.\n", &arData[0]);
	printf("arData�迭�� �ι�° �ε����� �ּҴ� %x�Դϴ�.\n", &arData[1]);
	printf("arData�迭�� ����° �ε����� �ּҴ� %x�Դϴ�.\n", &arData[2]);

	printf("arData�迭�� �ּҴ� &�����ڸ� ������� �ʾƵ� �ּҸ� �ҷ��� �� �ִ�.\n");
	printf("arData�迭�� ù��° �ε����� �ּҴ� %x�Դϴ�.\n", arData+1);
	printf("&arData[0]�� %d, arData+0�� %d", &arData[0], arData + 0);

	return 0;
}
*/
int main
int a1 = 10;
char ch1 = 'A';
int* p = 0;
int* num = &a;
*p = &a;
printf(p);







