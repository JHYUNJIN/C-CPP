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
	//printf("�迭 �� ����� ������ : %d\n", sizeof(ar) / sizeof(int));

	//for (int i = 0; i < sizeof(ar)/sizeof(int); i++){
	//	printf("ar[%d]�� ���� %d\n", i, ar[i]);
	//}

	//int ar2[3] = { 0 }; // {0}�� ����ϸ� ��� 0���� �ʱ�ȭ�ȴ�.
	//ar2[0] = 300;
	//for (int i = 0; i < sizeof(ar2) / sizeof(int); i++) {
	//	printf("ar2[%d]�� ���� %d\n", i, ar2[i]);
	//}

	//char country1[] = { 'h','y','u','n','j','i','n','\0'/*NULL*/};
	//char country2[] = "singapore"; // �ֵ���ǥ�� ����ϸ�, �ι��ڴ� �ڵ����� �߰��ȴ�.
	//char country3[10] = "USA";

	//printf("%s\n", country1);
	//printf("%s\n", country2);
	//printf("%s\n", country3);
	//printf("country3�� ũ�� : %d\n", sizeof(country3));
	//printf("%c", country3[9]);

	//printf("\n-----���ڿ� �Է¹ޱ�-----\n");
	//char input[100]; // input�� �� ��ü�� �ּҸ� ��Ÿ���� . input�� �迭�̱� ������ �ּ��̴�.
	//scanf("%s", input); // �׷��� &�� �Ⱥٿ��൵ ��밡���ϴ�.
	//printf("%s\n", input);

	//printf("sizeof(input) : %d\n", sizeof(input));
	//printf("strlen(input) : %d\n", strlen(input));


	// input�� �Էµ� ��� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ�
	// �������� �״�� ����ϴ� ���α׷� �����

	char input[100];
	printf("��� �Է����ּ���.");
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
         // �ҹ����� �� ������ ����
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