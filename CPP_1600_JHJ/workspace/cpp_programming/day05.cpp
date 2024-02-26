#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Animal {
private:
	string name;
	int age;
	string feed;
public:
	Animal(string name, int age, string feed) {
		this->name = name;
		this->age = age;
		this->feed = feed;
	}

	int getAge() {
		return age;
	}
	string getName() {
		return name;
	}

	void test() {
		cout << name << endl;
		cout << age << endl;
		cout << feed << endl;
	}

};

class Dog : public Animal {
private:
	string species;
	string feed;
public:
	void test() {
		cout << getName() << endl;  // ����� �޴��� private�ȿ� �ִ� �ڵ�� ���̷�Ʈ�� �޾ƿ� �� ����.
		cout << getAge() << endl;
		cout << feed << endl;
		cout << species << endl;
	}

	Dog(string name, int age, string feed, string species) : Animal(name,age,feed) {
		this->species = species;
		this->feed=feed;
	}


};




int main() {

	Animal animal1("������ũ", 3, "���콺");
	animal1.test();
	Dog dog1("�鱸", 1, "�����", "������");
	dog1.test();






	return 0;
}