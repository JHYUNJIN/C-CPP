#include<stdio.h>

void main() {

	// �迭 �ӿ��� Ÿ�Կ� �ش��ϴ� ���� ���� �� �ִ�.
	int ar[] = { 10,20,30 };

	printf("ar : %d\n",ar);
	printf("ar : %d\n",ar+1);
	printf("ar : %d\n",ar+2);

	// *�� �ּҰ� �տ� ���Ǹ� ������ �����ڷ� �����Ѵ�.
	printf("*ar : %d\n",*ar);
	printf("*(ar+1) : %d\n",*(ar+1));
	printf("*(ar+2) : %d\n",*(ar+2));
	printf("*(ar+3) : %d\n",*(ar+3));
	printf("*(ar+4) : %d\n",*(ar+4));

	printf("ar[0] : %d\n", ar[0]);
	printf("ar[1] : %d\n", ar[1]);
	printf("ar[2] : %d\n", ar[2]);
	printf("ar[3] : %d\n", ar[3]);
	printf("ar[4] : %d\n", ar[4]);
	printf("ar[5] : %d\n", ar[5]);

}