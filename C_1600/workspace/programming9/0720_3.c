#include<stdio.h>

void main() {
	int ar[2][3] = {
		{1,2,3},
		{10,20,30}
	};

	//printf("ar[0] : %d\n", ar[0]);
	//printf("ar[0][0] : %d\n", ar[0][0]);
	//printf("ar[0][1] : %d\n", ar[0][1]);
	//printf("ar[0][2] : %d\n", ar[0][2]);
	//printf("ar[1] : %d\n", ar[1]);
	//printf("ar[1][0] : %d\n", ar[1][0]);
	//printf("ar[1][1] : %d\n", ar[1][1]);
	//printf("ar[1][2] : %d\n", ar[1][2]);

	for (int i = 0; i < 2; i++)	{ // 2행 3열이니까 i<2 가 되어야 하고 3열이니까 j<3 이 되어야 한다.
		for (int j = 0; j < 3; j++)		{
			printf("ar[%d][%d]번째 값 : %d\n",i,j, ar[i][j]);
		}
	}




}//main