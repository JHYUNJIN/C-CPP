#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//#include<string.h>
//#include<stdlib.h>
#include<string>
using namespace std;


typedef	struct student {
	char name[10];
	int age;
	double height;
	double weight;
}s;

int main() {

	//int* temp = new int;
	//*temp = 49;

	//cout << "temp �ȿ� ����ִ� �� : " << *temp << endl;
	//delete temp;

	//cout << "temp �ȿ� ����ִ� �� : " << *temp << endl;

	//s* s1 = new s;
	//strcpy(s1->name, "������");
	//s1->age = 22;
	//s1->height = 177;
	//s1->weight = 60;

	//cout << "1�� �л��� �̸��� " << s1->name << "�̰� ���̴� " << s1->age << "�� �Դϴ�." << endl;


	//int* ar = new int[5];
	//int temp;

	//for (int i = 0; i < 5; i++)	{
	//	cout << i + 1 << "��° �� �Է� : ";
	//	cin >> ar[i];
	//}
	//
	//for (int i = 0; i < 5; i++)	{
	//	cout << (i + 1) << "��° �� : " << ar[i] << endl;
	//}

	//delete[] ar; // �迭�� �޸� �Ҵ� ����

	//string name;

	//cout << "�̸��� �Է��ϼ���. : ";
	//getline(cin, name); // getline()�� string������Ͽ� ���ǵǾ� �ִ�.
	//cout << "�̸� : " << name << endl;


	//cout << "�̸��� �Է��ϼ���. : ";
	//cin >> name;
	//cout << "�̸� : " << name << endl;

	//cout << "name.length() : " << name.length() << endl;
	//cout << "name.size() : " << name.size() << endl;

	//for (int i = 0; i < name.length(); i++)	{
	//	cout <<i <<"��° ���� ���� : " << name[i] << endl;
	//}


	////�ǽ�
	//string id;

	//

	//while (1)	{
	//cout << "�ֹι�ȣ�� �Է����ּ��� : ";
	//cin >> id;
	//	//int i=0;
	//	id[6] = int(id[6]);
	//	if (id[6] == 1 || id[6] == 3) {
	//		cout << "�����Դϴ�.";
	//	}
	//	else if (id[6] == 2 || id[6] == 4) {
	//		cout << "�����Դϴ�.";
	//	}
	//	else {
	//		cout << "�ֹι�ȣ�� �߸��Ǿ����ϴ�.";
	//		continue;
	//	}
	//	//i++;
	//	break;
	//}
	//���������� �Ϸ��� �� ��� �ۿ� ������ �ϳ��� �����ͼ� Ȯ���ϰ� ������ �� ���°ǰ���
	//�ȵȱ��� ����

	//while (1) {
	//	cout << "�ֹι�ȣ�� �Է����ּ��� : ";
	//	cin >> id;
	//	if (id[6]=='1'||id[6]=='3') {
	//		cout << "�����Դϴ�.";
	//		break;
	//	}
	//	else if (id[6] == '2' || id[6] == '4') {
	//		cout << "�����Դϴ�.";
	//		break;
	//	}
	//	else {
	//		cout << "�ٽ� �Է����ּ���.";
	//	}
	//}



	//for (int i = 0; i < id.length(); i++)	{
	//	id[i] = int(id[i]);
	//	if (id[6]==1 || id[6]==3) {
	//		cout << "�����Դϴ�.";
	//	}
	//	else if (id[6] == 2 || id[6] == 4) {
	//		cout << "�����Դϴ�.";
	//	}
	//	else {
	//		cout << "�ֹι�ȣ�� �߸��Ǿ����ϴ�.";
	//	}
	//}

	//string Ŭ������ ���������ڸ� ����� �� ���� �׷��Ƿ� printf ��� �Ұ���!!
	
	//int data;
	//string str;

	//// ǥ���Է� ���ۿ� ���๮�ڰ� �����ְ� �ȴ�.
	//cin >> data; // ���๮��(\n)�� �����ִ�.
	//cin.ignore(); // ���۸� ����ش�.
	//getline(cin, str);
	////cin >> str;
	//cout << data << str << endl;

	bool flag = false;

	cout << "���� 1�� ũ�� : " << sizeof(1) << endl;
	cout << "���� 2�� ũ�� : " << sizeof(2) << endl;
	cout << "true�� ũ�� : " << sizeof(true) << endl;
	cout << "true�� �� : " << true << endl;
	cout << "false�� ũ�� : " << sizeof(false) << endl;
	cout << "false�� �� : " << flag << endl;





	return 0;
}