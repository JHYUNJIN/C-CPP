#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

class Car {
private:
	string name;
	int price;

public:
	//멤버 변수이름과 생성자로 넘어오는 매개변수의 이름이 같을 때
	// 아래 문법을 이용해서 간단하게 만들 수 있다.
	Car(string name, int price) : name(name), price(price) { ; }

	virtual void engineStart() = 0;

	virtual void getPrice() {
		cout << price << "만원 입니다." << endl;
	}
};

class BMW : public Car {
private : 
	string brand;
public:
	BMW(string brand, string name, int price) :Car(name, price), brand(brand) { ; }

	void BrandName() {
		cout << brand  << endl;
	}

	void engineStart() {
		cout << "시동이 켜졌습니다." << endl;
	}
};

class IAnimalAction {

public:
	virtual void bark() {}

	virtual void eatting() {}

	virtual void handup() {}
	
	virtual void sleep() {}

};

class AnimalInfo {
public:
	string name;
	int age;
	string feed;

	AnimalInfo(string name, int age, string feed):name(name),age(age),feed(feed) {}
};


class Dog :public AnimalInfo, public IAnimalAction {
public:
	Dog(string name, int age, string feed):AnimalInfo(name,age,feed) {}

			void bark() {
				cout << name << "멍멍" << endl;
			}
			void eatting() {
				cout << feed << endl;
			}
			void handup() {
				cout << name<<"손" << endl;
			}
			void sleep() {
				cout << name << "잠" << endl;
			}
};





int main() {
	BMW bmw("BMW","2Series",4000);

	bmw.BrandName();
	bmw.getPrice();
	bmw.engineStart();


	Dog dog("땡칠이", 10, "개껌");
	dog.bark();
	dog.eatting();
	dog.handup();
	dog.sleep();














	return 0;
}