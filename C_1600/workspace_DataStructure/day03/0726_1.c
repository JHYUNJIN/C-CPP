#include<stdio.h>
#include<stdlib.h> // malloc()이 정의되어 있는 헤더파일

struct Student{
	int score;
};



int main() {
	// int는 동적할당하겠다는 의미.
	// void* : 어떤 타입의 주소로 넘겨줄지 결정하지 못했기 때문에 void 타입의 주소로 넘겨준다.
	int* ptr = (int*)malloc(sizeof(int));
	printf("ptr위치 : %d\n", ptr);
	printf("동적할당된 위치 : %d\n", &ptr);
	printf("동적할당된 공간안에 들어있는 값 : %d\n", *ptr); //초기에는 쓰레기값 들어있다.
	*ptr = 100;
	printf("동적할당된 공간안에 들어있는 값 : %d\n", *ptr);

	free(ptr); // 동적할당 해제
	printf("동적할당된 공간안에 들어있는 값 : %d\n", *ptr);

	//*ptr = 300;
	//printf("동적할당된 공간안에 들어있는 값 : %d\n", *ptr);
	//
	//free(ptr);
	
	//calloc(개수,크기) : 동적으로 할당시켜주면서 동시에 초기화까지 진행한다.
	ptr = (int*)calloc(1, sizeof(int));
	printf("*ptr : %d\n",*ptr);
	free(ptr);

	struct  Student* stPtr = (struct Student*)malloc(sizeof(struct Student));
	// 동적으로 할당받은 공간의 멤버변수에 값 대입하기
	stPtr->score = 100;
	(*stPtr).score = 100;
	free(stPtr);

	//int 타입의 요소가 5개 들어있는 배열
	int* ar = (int*)malloc(sizeof(int) * 5);
	printf("&ar : %d\n", &ar);
	printf("동적으로 할당받은 주소 : %d\n", ar);

	ar[0] = 10; //*ar=10;
	printf("%d\n", ar[0]);

	int* ar2 = (int*)calloc(5,sizeof(int));
	for (int i = 0; i < sizeof(ar2); i++)	{
		printf("ar2[%d] : %d\n", i, ar2[i]);
	}

	
	printf("ar2의 주소 : %d\n", &ar2);
	printf("ar2의 사이즈 : %d\n", sizeof(ar2));




	return 0;
}