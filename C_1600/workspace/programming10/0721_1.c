#include<stdio.h>


//�Լ��� ����� ���Ǹ� ���ÿ� ����
// �Ű������� ������ �� �� �ִ� �Լ��� ����
//������ ���� ���, ���ϰ��� Ÿ���� ���� �տ� �����ش�.
int add(int a, int b) {
	return a+b;
}

//���� Ÿ���� ���� ���� void�� ������´�. ����Ÿ���� ������ ������ Ȱ�� �� �� ����.
void printName(int cnt, char* name); // �Լ��� ����  // char* name == char name[]

//[�ǽ�]
//����ڿ��� ������ �Է¹޾� �ش� ������
//¦������ Ȧ������ �Ǻ��ϴ� �Լ�
//¦���̸� 1 Ȧ���̸� 0 ����
//�����Լ����� �׽�Ʈ

int oddEven(int num);



int main() {

	//�Ű������� 2�� �ִ� ���·� ���Ǹ� �� ���ұ� ������
	//�Ű������� �Ѱ����� ������ ������ �߻��Ѵ�.
	//add();

	//������ ������ �Լ� ��� �κ� ��ü�� ���� ������ �����ϴ�.
	//int result = add(1, 2);
	//printf("%d\n", result);

	//result = add(10,2);
	//printf("%d\n", result);

	//printName(3, "������");
	
	int a = oddEven(3);

	if (a){
			printf("Ȧ���Դϴ�.");
	}
	else{
			printf("¦���Դϴ�.");
	}

	return 0;
	}

	void printName(int cnt, char name[]) {
		for (int i = 0; i < cnt; i++)	{
			printf("%s\n", name);
		}
}


	int oddEven(int num) {
		if (num % 2 == 0) {
			return  0;
		}
		else {
			return 1;
		}
	}
