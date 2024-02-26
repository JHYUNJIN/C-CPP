#include<stdio.h>
#include<string.h> // 문자열 함수를 사용하기 위해 선언함 strcpy(), strcmp(문자열 비교), strlen(), strcat
#include<stdlib.h>  // 위 3개의 헤더파일이면 대부분의 c언어 코드를 사용할수있다.

struct member {
	char name[15];
	char age[3];
	char phone[17];
};

// 함수 선언
void print_menu(); // 화면에 나타날 메뉴를 선택하는 함수
void view_con(); 
void add_con();
void del_con();

char* fname = "c://sample//list.txt";

// 메인함수
int main(void) {
	char select = 0;
	puts("\n=== 연락처 ===\n");

	while (select != 4) {
		print_menu();
		select = getche(); // scanf처럼 콘솔창에서 입력을 받을 수 있게 해준다.
		getchar();

		switch (select)
		{
		case '1': view_con();
			break;
		case '2': add_con();
			break;
		case '3': del_con();
			break;
		case '4': return; // return; 스위치문 종료를 의미
			break;
		default: printf("\n잘못 입력하였습니다. 다시 입력해주세요.\n");
		}
	}
	return 0;

}

// 함수 기능 구현
void print_menu() {
	printf("1. 연락처 보기\n");
	printf("2. 연락처 추가\n");
	printf("3. 연락처 삭제\n");
	printf("4. 나가기\n");
}

void view_con() {
	char str[300];
	FILE* rfp,* wfp;
	int i;

	rfp = fopen(fname, "r");
	
	if (rfp == NULL) {
		wfp = fopen(fname, "w");
		fclose(wfp);
		rfp = fopen(fname, "r");
	}
	for (i = 1; ; i++) {
		fgets(str,300,rfp);
		if (feof(rfp))
			break;
		printf("%d : %s", i, str);
	}
	if (i == 1) {
		puts("\n파일에 연락처가 없습니다.\n");
	}
	fclose(rfp);
}

void add_con() {
	struct member memb = { "","","" }; // 구조체에 아무런 값도 존재하지 않는다.
	char str1[300] = "";
	FILE* wfp;
	wfp = fopen(fname, "a");
	printf("이름을 입력하세요. : ");
	gets(memb.name);
	printf("나이를 입력하세요. : ");
	gets(memb.age);
	printf("전화번호를 입력하세요. : ");
	gets(memb.phone);
	
	strcat(str1, memb.name);
	strcat(str1, "\t");
	strcat(str1, memb.age);
	strcat(str1, "\t");
	strcat(str1, memb.phone);
	strcat(str1, "\t");

	fputs(str1, wfp);
	fclose(wfp);

}

void del_con() {

}