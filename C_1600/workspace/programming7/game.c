
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


void main() {
	int choice = 0, answer, correct_answer, score;
	int level = 0;
	int totalScore = 0;
	srand(time(NULL));

	while (1) {
		printf("1. ���̵� ����\t 2.�����ϱ�\t 3. ���� Ȯ��\t 4. ���� ����\n");
		printf("�Է� : ");
		scanf_s("%d", &choice);
		if (choice == 4) {
			printf("������ ��վ�����~?? %d������ ������ �Ǿ��׿�!\n �ȳ���������.", totalScore);
			break;
		}
		else if (choice == 1) {
			printf("1. ��\t 2. ��\t 3. ��\n��ȣ�Է� : ");
			scanf_s("%d", &choice);
			switch (choice) {
			case 1:
				level = 3;
				printf("���̵� ���� : Level 3\n");
				break;
			case 2:
				level = 2;
				printf("���̵� ���� : Level 2\n");
				break;
			case 3:
				level = 1;
				printf("���̵� ���� : Level 1\n");
				break;
			default:
				printf("���̵� ������ �ٽ� ���ּ���.");
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
				printf("���̵��� �������ּ���.");
				continue;
			}
			printf("������ ���纸����! >>");
			scanf_s("%d", &answer);
			if (answer == correct_answer) {
				printf("�����Դϴ�.\n%d���� ȹ���Ͽ����ϴ�!\n", score);
				totalScore += score;
			}
			else {
				for (int i = 0; i < 5; i++) {
					if (answer==correct_answer) {
							printf("�����Դϴ�. ������ ������ ��ȸ���� ���߼̱���.\n%d���� ȹ���Ͽ����ϴ�!\n", score);
							totalScore += score;
					}
					else  if(answer!=correct_answer) {
						printf("%d��° ��ȸƲ�Ƚ��ϴ�!! �ٽ� ���纸����.>> ", i+1);
						scanf_s("%d", &answer);
						}
						else {
						printf("��! ������ ��ȸ�Դϴ�. ������!!?>> ");
						scanf_s("%d", &answer);
						}
					}
					printf("Ʋ�Ƚ��ϴ�. ������ : %d�Դϴ�.\n������ȸ��...\n",correct_answer);
				}
			}

			//while (1) {
			//	if (answer==correct_answer){
			//		printf("�����Դϴ�.\n%d���� ȹ���Ͽ����ϴ�!!\n",score);
			//		totalScore += score;
			//		break;
			//	}
			//	else {
			//		printf("Ʋ�Ƚ��ϴ�. �ٽ� ���纸����! >> ");
			//		scanf_s("%d", &answer);

			//	}
			//}
			
			// 
			//if (answer == choice) {
			//	printf("����!, %d���Դϴ�.\n", score);
			//	totalScore += score;
			//}
			//else {
			//	printf("��! ������ %d�Դϴ�.",answer);
			//}
		}
		else if (choice == 3) {
			printf("���� ���� : %d��\n", totalScore);
		}
		else {
			printf("�ٽ� �Է����ּ���.");
		}
	}

	
	}//manin
