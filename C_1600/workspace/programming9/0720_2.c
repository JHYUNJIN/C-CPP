	
#include<stdio.h>

void main() {
	// �迭 ������
	int ar1[5] = { 1,2,3,4,5 };
	int* ptr = ar1;
	printf("%d\n", ptr);
	printf("%d\n", *ptr); // ���̶�� ���� 1�� ��µȴ�.

	int* ar2[10];
	int* a, b;
	int data = 10;
	int nums[5] = { 10,20,30,40,50 };

	a = &data;
	b = nums;
	ar2[0] = a;
	ar2[1] = b;

	//printf("ar2 : %d\n", ar2);
	//printf("ar2 : %d\n", *(*ar2));
	//printf("ar2 : %d\n", *ar2[0]);

	// for���� �̿��ؼ� ar1[1]�� ����ִ� 
	for (int i = 0; i < 5; i++){
		printf("ar1[%d]��° �� : %d\n", i+1,ar1[i]);
	}


	//printf("ar2 : %d", *(ar2[2]));

	// for���� �̿��ؼ� ar2[1]�� ����ִ� 
	for (int i = 0; i < 5; i++){
		printf("ar2[1]�� %d��° �濡 �ִ� �� : %d\n", i,*(ar2[1]+i)); // �ּҰ��� ������ ���� ar2[1]+1 ������Ѵ�.
	}

	for (int i = 0; i < 5; i++) {
		printf("ar2[1] �� %d��°�濡 �ִ� �� :  %d\n", i, *(ar2[1] + i));
	}


}



/*
#include <stdio.h>

void main() {
   // �迭 ������
   int ar1[5] = { 1,2,3,4,5 };
   int* ptr = ar1;
   //printf("%d\n", ptr);
   //printf("%d\n", *ptr);

   // ������ �迭
   int* ar2[10];
   int* a, b;
   int data = 10;
   int nums[5] = { 10, 20, 30, 40, 50 };

   a = &data;
   b = nums;

   ar2[0] = a;
   ar2[1] = b;

   //printf("ar2�� ����� �ּ� %d\n", ar2);
   //printf("ar2�� ����� �� %d\n", *(*ar2));
   //printf("ar2�� ����� �� %d\n", *ar2[0]);

   // [�ǽ�]
   // for�� ������ ar2[1] �� ����ִ� �迭�� �ּҷ� �����ؼ�
   // ���� �� �̾ƺ�����!
   for (int i = 0; i < 5; i++) {
	  printf("ar2[1] �� %d��°�濡 �ִ� �� :  %d\n",i, *(ar2[1] + i));
   }
}
*/
