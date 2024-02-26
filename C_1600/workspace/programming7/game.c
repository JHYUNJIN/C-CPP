
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void main() {
	int choice = 0, answer, correct_answer, score;
	int level = 0;
	int totalScore = 0;
	srand(time(NULL));

	while (1) {
		printf("1. 난이도 설정\t 2.게임하기\t 3. 점수 확인\t 4. 게임 종료\n");
		printf("입력 : ");
		scanf_s("%d", &choice);
		if (choice == 4) {
			printf("게임은 재밌었나요~?? %d점으로 마무리 되었네요!\n 안녕히가세요.", totalScore);
			break;
		}
		else if (choice == 1) {
			printf("1. 상\t 2. 중\t 3. 하\n번호입력 : ");
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				level = 3;
				printf("난이도 설정 : Level 3\n");
				break;
			case 2:
				level = 2;
				printf("난이도 설정 : Level 2\n");
				break;
			case 3:
				level = 1;
				printf("난이도 설정 : Level 1\n");
				break;
			default:
				printf("난이도 설정을 다시 해주세요.");
			}
		}
		else if (choice == 2) {
			if (level == 3) {
				correct_answer = rand() % 100 + 1;
				score = 100;
			}
			else if (level == 2) {
				correct_answer = rand() % 20 + 1;
				score = 50;
			}
			else if (level == 1) {
				correct_answer = rand() % 5 + 1;
				score = 10;
			}
			else {
				printf("난이도를 설정해주세요.");
				continue;
			}
			printf("정답을 맞춰보세요! >>");
			scanf_s("%d", &answer);
			if (answer == correct_answer) {
				printf("정답입니다.\n%d점을 획득하였습니다!\n", score);
				totalScore += score;
			}
			else {
				for (int i = 0; i < 5; i++) {
					if (answer==correct_answer) {
							printf("정답입니다. 다행히 마지막 기회에서 맞추셨군요.\n%d점을 획득하였습니다!\n", score);
							totalScore += score;
					}
					else  if(answer!=correct_answer) {
						printf("%d번째 기회틀렸습니다!! 다시 맞춰보세요.>> ", i+1);
						scanf_s("%d", &answer);
						}
						else {
						printf("자! 마지막 기회입니다. 정답은!!?>> ");
						scanf_s("%d", &answer);
						}
					}
					printf("틀렸습니다. 정답은 : %d입니다.\n다음기회에...\n",correct_answer);
				}
			}

			//while (1) {
			//	if (answer==correct_answer){
			//		printf("정답입니다.\n%d점을 획득하였습니다!!\n",score);
			//		totalScore += score;
			//		break;
			//	}
			//	else {
			//		printf("틀렸습니다. 다시 맞춰보세요! >> ");
			//		scanf_s("%d", &answer);

			//	}
			//}
			
			// 
			//if (answer == choice) {
			//	printf("정답!, %d점입니다.\n", score);
			//	totalScore += score;
			//}
			//else {
			//	printf("땡! 정답은 %d입니다.",answer);
			//}
		}
		else if (choice == 3) {
			printf("점수 총합 : %d점\n", totalScore);
		}
		else {
			printf("다시 입력해주세요.");
		}
	}

	
	}//manin
