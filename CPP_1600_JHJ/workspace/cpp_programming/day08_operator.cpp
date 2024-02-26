#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

class Numbers {
private:
	int num1, num2;

public:
	Numbers(){}

	Numbers(int num1, int num2) :num1(num1), num2(num2) {}

	void printNum() {
		cout << "num1 : " << num1 << "\tnum2 : " << num2 << endl;
	}

	//Numbers operator + (Numbers temp) {
	//return Numbers(num1 + temp.num1, num2 + temp.num2);
	//}

	// + ���� �����ε�
	// ������ �̷������ �Լ��� ȣ���� ��ü�� ���� 
	// �Ű������� �Ѿ� �� �Լ��� ���� ���� ����� ����

	void operator + (Numbers temp) {
		num1 += temp.num1;
		num2 += temp.num2;
	}

	bool operator<(Numbers temp){
		return (num1 + num2) < (temp.num1 + temp.num2);
	}

	void operator + (int num) {
		num1 += num;
		num2 += num;
	}
	
	void operator += (int num) {
		num2 += num;
	}

	//������
	Numbers operator ++() {
		num2++;
		return *this;
	}

	//������
	//�Ű������� �ۼ��ϴ� ������ ���������� �˷��ֱ� �����̴�.
	Numbers operator ++(int temp) {
		Numbers result = *this;
		num2++;
		return result;
	}


};




int main() {
	Numbers data1(10, 5);
	Numbers data2(5, 3);

	data1 + data2;
	data1.printNum();

	data1 + 10;
	data1.printNum();

	Numbers data3(10,5);

	data1 < data2 ? cout << "data1�� ������� ���� �� �۽��ϴ�." : 
							cout << "data2�� ������� ���� �� �۰ų� �����ϴ�." << endl;

	data2 += 10;
	data2.printNum();

	Numbers test;
	test = ++data2;
	test.printNum();
	data2.printNum();
	cout << "====================================" << endl;
	test = data2++;
	test.printNum();
	test = data2++;
	data2.printNum();
	test.printNum();


	return 0;
}