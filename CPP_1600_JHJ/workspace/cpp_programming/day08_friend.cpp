#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

class Coffee {
private:
	string name;
	int price;
	friend class Kiosk; // friend Ŭ���� ����

public:
	Coffee(string name) : name(name) {}
	Coffee(string name, int price) : name(name), price(price) {}

	friend void printMenu(Coffee c) {
		cout << c.name << endl;
	}

	friend void showName(Coffee c);
};

class Kiosk {
public:
	//friend �������� ���� Coffee�� private ���������
	// �޼ҵ� ȣ����� ���ٰ���
	void printMenu(Coffee co){
			cout << "�޴� : " << co.name << endl;
			cout << "���� : " << co.price << endl;
		}
};



//friend �Լ���
//���������ڰ� private�̶� ���� �����ϰ� ���ش�.
void showName(Coffee c) {
	cout << c.name << endl;
}



int main() {
	Coffee c("�Ƹ޸�ī��");
	printMenu(c);
	Coffee co("���̽�Ƽ", 3000);
	Kiosk k;
	k.printMenu(co);

	




	return 0;
}
