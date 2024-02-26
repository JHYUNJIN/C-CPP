#include<stdio.h>
void main() {

	//for (int num = 0; num < 5; num++) {
	//	printf("%d\n", num+1);
	//	for (int i = 0; i < 5; i++){
	//		printf("%d", i + 1);
	//	}
	//	printf("\n");
	//}

	//2단~9단까지 구구단 출력하기
	
	//for (int i = 2; i < 10; i++)	{
	//	for (int j = 1; j < 10; j++)	{
	//		int sum = i * j;
	//		printf("%d x %d = %d ", i, j, sum);
	//	}
	//	printf("\n");
	//}
	char ch = NULL;
	for (int i = 0; i < 6; i++) {
		ch=(char)(i + 65);
		printf("%c", ch);
	}

	printf("\n");
	
	ch = NULL;
	for (int i = 0; i < 6; i++) {
		ch=(char)(i + 65);
		if (i == 2) {
			continue;
		}
		printf("%c", ch);
	}

	printf("\n");
	ch = NULL;
	for (int i = 0; i < 6; i++) {
		ch=(char)(i + 65);
		i == 2 ? i+2 : printf("%c", ch);
	}

	printf("\n");
	ch = NULL;
	for (int i = 0; i < 5; i++) {
		printf("%c", i < 2 ? i + 65 : i + 66);
	}




}//main