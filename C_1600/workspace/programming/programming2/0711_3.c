#include<stdio.h>

void main() {
	printf("혼자 아닌 둘이라 더 외롭다 했어\n");
	printf("슬픈 표정으로 넌 물었지 내말 이해할수 있어?");

	printf("\n\n혼자 아닌 둘이라 더 외롭다 했어\t\t");
	printf("슬픈 표정으로 넌 물었지 내말 이해할수 있어?");

	printf("\n\n나는 너에게 \"사랑해\"라고 말했다.");

	printf("\n\n제어문자는 \\로 시작합니다.");
	printf("\n================================================\n");
	printf("오늘은 %d일 입니다.\n",11);
	printf("저의 학점은 %c 입니다.\n",'A');
	printf("파이는 %lf 입니다.\n",3.14);
	printf("파이는 %.2lf 입니다.\n",3.14);
	printf("파이는 %-10.2lf 입니다.\n",3.14);

	printf("저의 나이는 %d살이고, 학점은 %c이고, 평균은 %.2lf입니다.\n",30,'A',99.988888); //소숫점은 반올림된다.

	int age = 30;
	char grade = "A";
	double avg = 99.988;
	printf("저의 나이는 %d살이고, 학점은 %c이고, 평균은 %.2lf입니다.\n",age,grade,avg); //소숫점은 반올림된다.


}