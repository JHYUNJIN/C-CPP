#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

class Car {
private:
	string name;
	int price;

public:
	//��� �����̸��� �����ڷ� �Ѿ���� �Ű������� �̸��� ���� ��
	// �Ʒ� ������ �̿��ؼ� �����ϰ� ���� �� �ִ�.
	Car(string name, int price) : name(name), price(price) { ; }

	virtual void engineStart() = 0;

	virtual void getPrice() {
		cout << price << "���� �Դϴ�." << endl;
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
		cout << "�õ��� �������ϴ�." << endl;
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
				cout << name << "�۸�" << endl;
			}
			void eatting() {
				cout << feed << endl;
			}
			void handup() {
				cout << name<<"��" << endl;
			}
			void sleep() {
				cout << name << "��" << endl;
			}
};





int main() {
	BMW bmw("BMW","2Series",4000);

	bmw.BrandName();
	bmw.getPrice();
	bmw.engineStart();


	Dog dog("��ĥ��", 10, "����");
	dog.bark();
	dog.eatting();
	dog.handup();
	dog.sleep();














	return 0;
}