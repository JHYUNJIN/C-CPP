#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

class Coffee {
private:
	string name;
	int price;
	friend class Kiosk; // friend 클래스 선언

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
	//friend 선언으로 인해 Coffee의 private 멤버변수에
	// 메소드 호출없이 접근가능
	void printMenu(Coffee co){
			cout << "메뉴 : " << co.name << endl;
			cout << "가격 : " << co.price << endl;
		}
};



//friend 함수는
//접근제어자가 private이라도 접근 가능하게 해준다.
void showName(Coffee c) {
	cout << c.name << endl;
}



int main() {
	Coffee c("아메리카노");
	printMenu(c);
	Coffee co("아이스티", 3000);
	Kiosk k;
	k.printMenu(co);

	




	return 0;
}
