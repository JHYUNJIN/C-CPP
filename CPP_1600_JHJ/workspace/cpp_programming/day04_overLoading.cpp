#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Cafe_menu {
private:
	string menu_name;
	int price;

public:
	//생성자 오버로딩
	Cafe_menu(string menu_name,int price) {
		cout << "정식메뉴 생성" << endl;
		this->menu_name = menu_name;
		this->price = price;
	}
	Cafe_menu(string menu_name) {
		cout << "샘플메뉴 생성" << endl;
		this->menu_name = menu_name;
		price = 0;
	}

	void Menu() {
		cout << "메뉴 이름 : " << menu_name << endl;
		if (price != 0) {
			cout << "가격 : " << price << endl;
		}
		else {
			cout <<menu_name<< " 상품은 준비중입니다." << endl;
		}
	}

};

//함수의 오버로딩



int main() {

	Cafe_menu espresso("에스프레소", 3000);
	Cafe_menu americano("아메리카노", 3500);
	Cafe_menu latte("카페 라떼", 4200);
	Cafe_menu cake("케이크");

	espresso.Menu();
	americano.Menu();
	latte.Menu();
	cake.Menu();








	return 0;
}























/*   생성자 복습

class Family {
private:
	string name;
	static int family_money;
	// 만들어진 객체의 수를 담아줄 정적 멤버변수
	static int count;
	int total_money;

public:
	Family(string p_name) {
		cout << "생성자 실행" << endl;
		name = p_name;
		total_money = 0;
		count++;
	}

	~Family() { // 코드 작성 안해도 생성자를 만들면 소멸자는 자동으로 실행된다.
		cout << "소멸자 실행" << endl;
		count--;
	}


	void  pay(int w_money) {
	family_money -= w_money;
	cout << name + "이(가) " << w_money << "원을 사용하였습니다." << endl;
	cout << "현재 남은 금액은 " << family_money << "원 입니다." << endl;
	total_money += w_money;
	cout << name <<"이(가) 사용한 총 금액 : " << total_money << "원 입니다." << endl;
	}

	//정적 멤버 함수
	static void get_count();
};

// :: 은 소속을 의미한다. 위치를 따진다.  , 자바에서는 :: 이거 안해도된다.
int Family::family_money = 50000; 
int Family::count = 0;

void Family::get_count() {
	cout << "현재 생성된 객체 개수" << count << endl;
}





// ============================================================

int main() {

	Family son("정현진");
	Family father("킹스맨");
	Family sister("");

	son.pay(5000);
	son.pay(8000);
	father.pay(13000);
	father.pay(7000);
	//son.get_count();
	Family::get_count();

	cout << "=======================" << endl;







	return 0;
}

*/