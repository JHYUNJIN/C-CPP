#include<stdio.h>

int multiple_7(int num) {
	int count = 0;
	for (int i = num; i <= num+200; i++){
		if (i % 7 == 0) {
			count++;
		}
	}
	return count;
}

float height(float num) {
	float height;
	height = num / 100;

	return height;
}

int stop_watch(int num) {
	int hour, minute, second;
	
	minute = num / 60;
	hour = minute / 60;
	minute = minute % 60;
	second = num % 60;
	int time[3] = { hour,minute,second };

	return *time ;

	/*
	�ּҿ����ڴ� �迭�� �޾ƿ� �� ����.
	�迭�� ù��°���� �������ִ��� �߰�ȣ ������ �����鼭 �������� ����������� ������
	main�Լ����� �������� ã�� �� ���������̴�.
	*/


}









void main() {

	//int num,result;
	//printf("������ �Է����ּ���.");
	//scanf_s("%d",&num);

	//result=multiple_7(num);
	//printf("%d", result);


	//int num;
	//float result;
	//printf("Ű�� cm������ �Է����ּ���.");
	//scanf_s("%d", &num);

	//result=height(num);
	//printf("%.2f m", result);


	//int num, hour, minute, second;
	//
	//printf("�� �� : ");
	//scanf_s("%d", &num);
	//minute = num / 60;
	//hour = minute / 60;
	//minute = minute % 60;
	//second = num % 60;

	//printf("%d��/%d��/%d��", hour, minute, second);

	int num;
	int* result[3];

	printf("�� �� : ");
	scanf_s("%d", &num);
	*result = stop_watch(num);
	
	printf("%d�ð�/%d��/%d��", result[0], result[1], *(result+2));


}