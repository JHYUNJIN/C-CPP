#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Cafe_menu {
private:
	string menu_name;
	int price;

public:
	//������ �����ε�
	Cafe_menu(string menu_name,int price) {
		cout << "���ĸ޴� ����" << endl;
		this->menu_name = menu_name;
		this->price = price;
	}
	Cafe_menu(string menu_name) {
		cout << "���ø޴� ����" << endl;
		this->menu_name = menu_name;
		price = 0;
	}

	void Menu() {
		cout << "�޴� �̸� : " << menu_name << endl;
		if (price != 0) {
			cout << "���� : " << price << endl;
		}
		else {
			cout <<menu_name<< " ��ǰ�� �غ����Դϴ�." << endl;
		}
	}

};

//�Լ��� �����ε�



int main() {

	Cafe_menu espresso("����������", 3000);
	Cafe_menu americano("�Ƹ޸�ī��", 3500);
	Cafe_menu latte("ī�� ��", 4200);
	Cafe_menu cake("����ũ");

	espresso.Menu();
	americano.Menu();
	latte.Menu();
	cake.Menu();








	return 0;
}























/*   ������ ����

class Family {
private:
	string name;
	static int family_money;
	// ������� ��ü�� ���� ����� ���� �������
	static int count;
	int total_money;

public:
	Family(string p_name) {
		cout << "������ ����" << endl;
		name = p_name;
		total_money = 0;
		count++;
	}

	~Family() { // �ڵ� �ۼ� ���ص� �����ڸ� ����� �Ҹ��ڴ� �ڵ����� ����ȴ�.
		cout << "�Ҹ��� ����" << endl;
		count--;
	}


	void  pay(int w_money) {
	family_money -= w_money;
	cout << name + "��(��) " << w_money << "���� ����Ͽ����ϴ�." << endl;
	cout << "���� ���� �ݾ��� " << family_money << "�� �Դϴ�." << endl;
	total_money += w_money;
	cout << name <<"��(��) ����� �� �ݾ� : " << total_money << "�� �Դϴ�." << endl;
	}

	//���� ��� �Լ�
	static void get_count();
};

// :: �� �Ҽ��� �ǹ��Ѵ�. ��ġ�� ������.  , �ڹٿ����� :: �̰� ���ص��ȴ�.
int Family::family_money = 50000; 
int Family::count = 0;

void Family::get_count() {
	cout << "���� ������ ��ü ����" << count << endl;
}





// ============================================================

int main() {

	Family son("������");
	Family father("ŷ����");
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