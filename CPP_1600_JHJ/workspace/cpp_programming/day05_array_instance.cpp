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
		cout << "생성자 호출" << endl;
		this->number=number;
		this->name=name;
		this->age=age;
	}

	void printObj() {
		cout << "번호 : " << number << endl;
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Student() {
		cout << "소멸자 호출" << endl;
	}
};


int main() {

//
//
///*
//	//Student students[3]; // 기본생성자 없이 선언만 할 수는 없다.
//	// 기본생성자를 먼저 만들고 배열에 담자
//	Student s1(1, "정현진", 20);
//	Student s2(2, "킹스맨", 35);
//	Student s3(3, "조로", 25);
//	//명시적인 객체 만드는 문법
//	//Student s3 = Student(3,"조로",25);
//
//
//	Student students[3] = {s1,s2,s3}; 
//
//	//생성자를 호출해서 객체를 만들어주고
//	//그 객체를 배열에 담아주는 중... 메모리를 낭비중이다.
//*/
//	Student students[3] = { Student(1,"정현진",20),Student(2,"킹스맨",35),Student(3,"조로",27) };
//
//	//students[0].printObj();
//
//	for (int i = 0; i < size(students); i++){
//		students[i].printObj();
//	}
//

	//Student s1(1, "정현진", 20);
	//Student s2(2, "킹스맨", 35);
	//Student s3(3, "조로", 25);


	//Student* students[3] = { &s1,&s2,&s3 };

	//Student* students[3] = {&Student(1,"정현진",20),&Student(1,"정현진",20) ,&Student(1,"정현진",20) };

	//Student* s1 = new Student(1,"정현진",20);
	//Student* s2 = new Student(1,"정현진",20);
	//Student* s3 = new Student(1,"정현진",20);

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
