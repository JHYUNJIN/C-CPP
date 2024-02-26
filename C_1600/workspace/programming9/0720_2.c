	
#include<stdio.h>

void main() {
	// 배열 포인터
	int ar1[5] = { 1,2,3,4,5 };
	int* ptr = ar1;
	printf("%d\n", ptr);
	printf("%d\n", *ptr); // 참이라는 뜻의 1이 출력된다.

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

	// for문을 이용해서 ar1[1]에 들어있는 
	for (int i = 0; i < 5; i++){
		printf("ar1[%d]번째 값 : %d\n", i+1,ar1[i]);
	}


	//printf("ar2 : %d", *(ar2[2]));

	// for문을 이용해서 ar2[1]에 들어있는 
	for (int i = 0; i < 5; i++){
		printf("ar2[1]에 %d번째 방에 있는 값 : %d\n", i,*(ar2[1]+i)); // 주소값에 접근할 때는 ar2[1]+1 해줘야한다.
	}

	for (int i = 0; i < 5; i++) {
		printf("ar2[1] 에 %d번째방에 있는 값 :  %d\n", i, *(ar2[1] + i));
	}


}



/*
#include <stdio.h>

void main() {
   // 배열 포인터
   int ar1[5] = { 1,2,3,4,5 };
   int* ptr = ar1;
   //printf("%d\n", ptr);
   //printf("%d\n", *ptr);

   // 포인터 배열
   int* ar2[10];
   int* a, b;
   int data = 10;
   int nums[5] = { 10, 20, 30, 40, 50 };

   a = &data;
   b = nums;

   ar2[0] = a;
   ar2[1] = b;

   //printf("ar2에 저장된 주소 %d\n", ar2);
   //printf("ar2에 저장된 값 %d\n", *(*ar2));
   //printf("ar2에 저장된 값 %d\n", *ar2[0]);

   // [실습]
   // for문 돌려서 ar2[1] 에 들어있는 배열의 주소로 접근해서
   // 값을 다 뽑아보세요!
   for (int i = 0; i < 5; i++) {
	  printf("ar2[1] 에 %d번째방에 있는 값 :  %d\n",i, *(ar2[1] + i));
   }
}
*/
