#include<stdio.h>

void main() {

	// 배열 속에는 타입에 해당하는 값만 넣을 수 있다.
	int ar[] = { 10,20,30 };

	printf("ar : %d\n",ar);
	printf("ar : %d\n",ar+1);
	printf("ar : %d\n",ar+2);

	// *가 주소값 앞에 사용되면 역참조 연산자로 동작한다.
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