#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Human {
public:
	string name;
private: // ���������ڸ� �����ϸ�, �⺻������ private�� ����ȴ�.
	int age;

public:
	int getAge() { // ���� ��ü�� ������ �ִ� age ��������� ���� ���Ͻ�Ŵ
		return this->age; // this�� ��������
	}

	void setAge(int age) {
		this->age = age; 
		// ���⼭ this�� �����ϸ� �ȵȴ�. �ֳ��ϸ� ���尡���� �ִ� ������ age�� �޾ƿ��� �����̴�.
		// this�� �����ϰ� �Ǹ� �Ű������� �Ѿ�� age�� �ƴ϶� ������� age�� �����ϰ� �ȴ�.
		// this�� �Լ��� ȣ���� �ν��Ͻ�(��ü)�� �ּ��̴�.
		// this�� HumanŬ������ �ν��Ͻ��̴�.
		// �ܵ����� �θ����� ��ü��� ������ Ŭ������ ��� �θ����� �ν��Ͻ���� �Ѵ�.
	}

};


class Student {
private:
	string name;
	int num;
	int age;

public:
	// ������, �����ε�
	// �����ε�(Overloading) : ���� �̸��� �޼��� �������� �����鼭 �Ű������� ������ ������ �ٸ����� �ϴ� ���
	// �������̵�(Overriding) : ���� Ŭ������ ������ �ִ� �޼��带 ���� Ŭ������ �������ؼ� ���

	Student() {}
	Student(int num, string name, int age) {
		this->num = num;
		this->name = name;
		this->age = age;
	}

	void printObj() {
		cout <<"�й� : " << num<<"\n�̸� : " << name <<"\n���� : " << age << endl;
	}

};

class Car {
private:
	char* brand;
	int price;

public:
	Car() {}

	//char* �� �������̰�, �Է��� �̸��� ���ͷ��̴�.
	// �׷��� ������ �������� ���� �ʱ�ȭ�� �� �� ����.
	// char[], �� ������� ����� �������� �ʱ�ȭ�� �����ѵ�,
	// const�� �ٿ��ָ� ���ڿ��� �ʱ�ȭ�� �����ϰ� ���ش�.
	// ��ġ�� ����̱⶧����, ���ڿ� ���� ������ �Ұ����ϴ�.
	Car(const char* brand, int price) {
		this->brand = new char[strlen(brand)+1]; 
		// +1�� ���ڿ��� ������ null �Ǵ� 0���� �־��ֱ� �����̴�.
		strcpy(this->brand, brand);
		this->price = price;
	}

	~Car() {
		delete[] brand;
	}

	void printCar() {
		cout << "�귣�� : " << brand << "\n���� : " << price << endl;
	}
};

//int count_num = 0; // ��������
//�ٵ� ���������� �����ϸ� ��𼭵� �� ������ �� �ֱ� ������ 
// �ŷڰ� ���� �ʴ´�. Ŭ���� �ȿ� �ִ� ����� �˾ƺ��� ( ĸ��ȭ�� ����ȭ �̿� ? static �̿�)


class Count {
private:
	int value;
	static int count_num; // ����ƽ���ָ� 

public:
	Count() {
		count_num++;
	}

	~Count() {
		count_num--;
	}

	void printNum() {
		cout << "���� ��ü ���� = " << count_num << endl;
	}
 };

int Count::count_num = 0; // :: �� �Ҽ��� �ǹ��Ѵ�. ��ġ�� ������.  , �ڹٿ����� :: �̰� ���ص��ȴ�.
																								// �ڵ����� ������ ���ش�.

int main() {

	//��ü�� ���� ����
	Human* people1 = new Human;
	Human* people2 = new Human;
	
	people1->setAge(22);
	people2->setAge(30);


	people1->name="������";
	cout << people1->name << endl;
	cout << people1->getAge() << endl;
	cout << people2->getAge() << endl;

	delete people1, people2;
	//�޸� new Ű���带 ����Ͽ� �Ҵ��� ��, 
	//�ݵ�� delete Ű����� �Բ� ¦�� �̷絵�� �ؾ� �޸� ������ �߻����� �ʴ´�.

	// ���� �Ҵ��� �ƴ� �ٷ� ��ü ����
	Human people3;
	people3.name = "������";
	people3.setAge(19);
	people1->setAge(40);
	cout << "people1�� �ּ� : " << &people1 << endl;
	cout << "people3�� �ּ� : " << &people3 << endl;
	cout << people3.getAge() << endl;
	cout << people1->getAge() << endl;


	cout << endl;
	cout << "======================" << endl;
	cout << endl;


	Student s1 = Student(1, "������",20);
	Student s2;

	s1.printObj();
	s2.printObj();


	cout << endl;
	cout << "======================" << endl;
	cout << endl;


	Car car("���",40000);
	car.printCar();

	//car.~Car();
	//car.printCar();

	
	cout << endl;
	cout << "======================" << endl;
	cout << endl;


	Count c1;
	Count c2;
	Count c3;
	c1.printNum();

	Count* c4 = new Count;
	c1.printNum();
	delete c4;
	c1.printNum();

	c3.~Count();
	c3.printNum();















	return 0;
}