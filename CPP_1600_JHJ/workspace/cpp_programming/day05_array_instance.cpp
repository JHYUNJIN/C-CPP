#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Student {
private:
	int number;
	string name;
	int age;

public:
	Student(int number,string name,int age) {
		cout << "������ ȣ��" << endl;
		this->number=number;
		this->name=name;
		this->age=age;
	}

	void printObj() {
		cout << "��ȣ : " << number << endl;
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	~Student() {
		cout << "�Ҹ��� ȣ��" << endl;
	}
};


int main() {

//
//
///*
//	//Student students[3]; // �⺻������ ���� ���� �� ���� ����.
//	// �⺻�����ڸ� ���� ����� �迭�� ����
//	Student s1(1, "������", 20);
//	Student s2(2, "ŷ����", 35);
//	Student s3(3, "����", 25);
//	//������� ��ü ����� ����
//	//Student s3 = Student(3,"����",25);
//
//
//	Student students[3] = {s1,s2,s3}; 
//
//	//�����ڸ� ȣ���ؼ� ��ü�� ������ְ�
//	//�� ��ü�� �迭�� ����ִ� ��... �޸𸮸� �������̴�.
//*/
//	Student students[3] = { Student(1,"������",20),Student(2,"ŷ����",35),Student(3,"����",27) };
//
//	//students[0].printObj();
//
//	for (int i = 0; i < size(students); i++){
//		students[i].printObj();
//	}
//

	//Student s1(1, "������", 20);
	//Student s2(2, "ŷ����", 35);
	//Student s3(3, "����", 25);


	//Student* students[3] = { &s1,&s2,&s3 };

	//Student* students[3] = {&Student(1,"������",20),&Student(1,"������",20) ,&Student(1,"������",20) };

	//Student* s1 = new Student(1,"������",20);
	//Student* s2 = new Student(1,"������",20);
	//Student* s3 = new Student(1,"������",20);

	Student* students[3];
	int num, age;
	string name;

	for (int i = 0; i < size(students); i++){
	cin >> num >> name >> age;
	students[i]=	new Student(num, name, age);
	}

	for (int i = 0; i < size(students); i++){
		students[i]->printObj();
	}

	for (int i = 0; i < size(students); i++){
		delete students[i];
	}














	return 0;
}
