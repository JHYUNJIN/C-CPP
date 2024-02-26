#include<stdio.h>
#include<string.h>


void main() {


	//int ar[3] = { 10,20,30 };

	//printf("%d\n", ar[0]);
	//printf("%d\n", *ar+1);
	//printf("%d\n", ((*ar)+1)+1);

	//*ar = 100;
	//printf("%d\n", *ar);

	//printf("sizeof(ar) : %d\n", sizeof(ar));
	//printf("sizeof(int) : %d\n", sizeof(int));
	//printf("배열 속 요소의 개수는 : %d\n", sizeof(ar) / sizeof(int));

	//for (int i = 0; i < sizeof(ar)/sizeof(int); i++){
	//	printf("ar[%d]의 값은 %d\n", i, ar[i]);
	//}

	//int ar2[3] = { 0 }; // {0}을 사용하면 모두 0으로 초기화된다.
	//ar2[0] = 300;
	//for (int i = 0; i < sizeof(ar2) / sizeof(int); i++) {
	//	printf("ar2[%d]의 값은 %d\n", i, ar2[i]);
	//}

	//char country1[] = { 'h','y','u','n','j','i','n','\0'/*NULL*/};
	//char country2[] = "singapore"; // 쌍따옴표를 사용하면, 널문자는 자동으로 추가된다.
	//char country3[10] = "USA";

	//printf("%s\n", country1);
	//printf("%s\n", country2);
	//printf("%s\n", country3);
	//printf("country3의 크기 : %d\n", sizeof(country3));
	//printf("%c", country3[9]);

	//printf("\n-----문자열 입력받기-----\n");
	//char input[100]; // input은 그 자체로 주소를 나타낸다 . input은 배열이기 때문에 주소이다.
	//scanf("%s", input); // 그래서 &를 안붙여줘도 사용가능하다.
	//printf("%s\n", input);

	//printf("sizeof(input) : %d\n", sizeof(input));
	//printf("strlen(input) : %d\n", strlen(input));


	// input에 입력된 영어를 대문자는 소문자로, 소문자는 대문자로
	// 나머지는 그대로 출력하는 프로그램 만들기

	char input[100];
	printf("영어를 입력해주세요.");
	scanf("%s", input);
	for (int i = 0; i < strlen(input); i++){

		if (input[i]>=97&&input[i]<=122) {
		printf("%c", (char)(input[i] - 32));
		}
		else if (input[i]>=65 && input[i]<90) {
		printf("%c", (char)(input[i] + 32));
		}
		else {
		printf("%c", input[i]);
		}
	}

	/*
	   //for (int i = 0; i < strlen(input); i++) {
   int i = 0;
   while (input[i] != '\0') {
      if (input[i] >= 97 && input[i] <= 122) {
         // 소문자일 때 들어오는 영역
         printf("%c", input[i] - 32);
      }
      else if (input[i] >= 65 && input[i] <= 90) {
         printf("%c", input[i] + 32);
      }
      else {
         printf("%c", input[i]);
      }
      i++;
   }
   //}
	*/
















}//main