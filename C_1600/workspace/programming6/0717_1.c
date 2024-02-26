#include<stdio.h>

void main() {

	int num = 10;
	printf("%d\n", num);
	num = num + 1;
	printf("%d\n", num);//11
	num++; // 11 //후위형
	printf("%d\n", num); //12
	++num;//13 //전위형
	printf("%d\n", num);//13
}