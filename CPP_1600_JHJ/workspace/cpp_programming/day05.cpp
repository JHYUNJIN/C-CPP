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
		cout << getName() << endl;  // 상속을 받더라도 private안에 있는 코드는 다이렉트로 받아올 수 없다.
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

	Animal animal1("스네이크", 3, "마우스");
	animal1.test();
	Dog dog1("백구", 1, "영양식", "진돗개");
	dog1.test();






	return 0;
}