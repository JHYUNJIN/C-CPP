#include<stdio.h>
#include<string.h>

void main() {
	//strcmp(���ڿ�1,���ڿ�2);
	//���ڿ�1�� ���ڿ�2�� ���ٸ� 0
	//���ڿ�1�� ���ڿ�2���� �ƽ�Ű�ڵ尪�� �۴ٸ� -1
	//���ڿ�1�� ���ڿ�2���� �ƽ�Ű�ڵ尪�� ũ�ٸ� 1
	printf("%d\n", strcmp("banana","apple"));
	printf("%d\n", strcmp("apple", "apple"));
	printf("%d\n", strcmp("apple", "banana"));
	printf("%d\n", strcmp("aaa","aa"));
	printf("%d\n", strcmp("aa","aa"));
	printf("%d\n", strcmp("aa","aaa"));

	//strcat(������,���ڿ� ��)
	// �ش� ������ ����ִ� ���ڿ��� �ڿ� �������� ���ڿ��� �����ؼ� �������ش�.
	char target[10] = "hi";
	strcat(target, "bye");
	printf("��� : %s\n", target);



	char str1[] = "hyunjin";
	//str1 = "is so cool";
	//strcpy(�ٲ��� ����, �ٲ� ���ڿ� ��); ���ڿ� ���� ��������ش�.
	printf(str1);
	strcpy(str1, " so cool");
	printf(str1);




} //main