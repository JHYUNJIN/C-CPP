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

	// + 연산 오버로딩
	// 덧셈이 이루어지면 함수를 호출한 객체의 값을 
	// 매개변수로 넘어 온 함수의 값과 더한 결과로 수정

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

	//전위형
	Numbers operator ++() {
		num2++;
		return *this;
	}

	//후위형
	//매개변수를 작성하는 이유는 후위형임을 알려주기 위함이다.
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

	data1 < data2 ? cout << "data1의 멤버들의 합이 더 작습니다." : 
							cout << "data2의 멤버들의 합이 더 작거나 같습니다." << endl;

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