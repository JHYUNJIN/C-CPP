#include<stdio.h>
#include<string.h> // ���ڿ� �Լ��� ����ϱ� ���� ������ strcpy(), strcmp(���ڿ� ��), strlen(), strcat
#include<stdlib.h>  // �� 3���� ��������̸� ��κ��� c��� �ڵ带 ����Ҽ��ִ�.

struct member {
	char name[15];
	char age[3];
	char phone[17];
};

// �Լ� ����
void print_menu(); // ȭ�鿡 ��Ÿ�� �޴��� �����ϴ� �Լ�
void view_con(); 
void add_con();
void del_con();

char* fname = "c://sample//list.txt";

// �����Լ�
int main(void) {
	char select = 0;
	puts("\n=== ����ó ===\n");

	while (select != 4) {
		print_menu();
		select = getche(); // scanfó�� �ܼ�â���� �Է��� ���� �� �ְ� ���ش�.
		getchar();

		switch (select)
		{
		case '1': view_con();
			break;
		case '2': add_con();
			break;
		case '3': del_con();
			break;
		case '4': return; // return; ����ġ�� ���Ḧ �ǹ�
			break;
		default: printf("\n�߸� �Է��Ͽ����ϴ�. �ٽ� �Է����ּ���.\n");
		}
	}
	return 0;

}

// �Լ� ��� ����
void print_menu() {
	printf("1. ����ó ����\n");
	printf("2. ����ó �߰�\n");
	printf("3. ����ó ����\n");
	printf("4. ������\n");
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
		puts("\n���Ͽ� ����ó�� �����ϴ�.\n");
	}
	fclose(rfp);
}

void add_con() {
	struct member memb = { "","","" }; // ����ü�� �ƹ��� ���� �������� �ʴ´�.
	char str1[300] = "";
	FILE* wfp;
	wfp = fopen(fname, "a");
	printf("�̸��� �Է��ϼ���. : ");
	gets(memb.name);
	printf("���̸� �Է��ϼ���. : ");
	gets(memb.age);
	printf("��ȭ��ȣ�� �Է��ϼ���. : ");
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