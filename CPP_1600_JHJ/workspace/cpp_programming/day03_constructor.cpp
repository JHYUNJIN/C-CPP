#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Human {
public:
	string name;
private: // 접근제어자를 생략하면, 기본적으로 private가 적용된다.
	int age;

public:
	int getAge() { // 현재 객체가 가지고 있는 age 멤버변수의 값을 리턴시킴
		return this->age; // this는 생략가능
	}

	void setAge(int age) {
		this->age = age; 
		// 여기서 this는 생략하면 안된다. 왜냐하면 가장가까이 있는 영역의 age를 받아오기 때문이다.
		// this를 생략하게 되면 매개변수로 넘어온 age가 아니라 멤버변수 age에 접근하게 된다.
		// this는 함수를 호출한 인스턴스(객체)의 주소이다.
		// this는 Human클래스의 인스턴스이다.
		// 단독으로 부를때는 객체라고 하지만 클래스와 묶어서 부를때는 인스턴스라고 한다.
	}

};


class Student {
private:
	string name;
	int num;
	int age;

public:
	// 다형성, 오버로딩
	// 오버로딩(Overloading) : 같은 이름의 메서드 여러개를 가지면서 매개변수의 유형과 개수가 다르도록 하는 기술
	// 오버라이딩(Overriding) : 상위 클래스가 가지고 있는 메서드를 하위 클래스가 재정의해서 사용

	Student() {}
	Student(int num, string name, int age) {
		this->num = num;
		this->name = name;
		this->age = age;
	}

	void printObj() {
		cout <<"학번 : " << num<<"\n이름 : " << name <<"\n나이 : " << age << endl;
	}

};

class Car {
private:
	char* brand;
	int price;

public:
	Car() {}

	//char* 는 포인터이고, 입력한 이름은 리터럴이다.
	// 그렇기 때문에 포인터일 때는 초기화를 할 수 없다.
	// char[], 이 방식으로 선언된 변수에만 초기화가 가능한데,
	// const를 붙여주면 문자열로 초기화를 가능하게 해준다.
	// 그치만 상수이기때문에, 문자열 값의 변경은 불가능하다.
	Car(const char* brand, int price) {
		this->brand = new char[strlen(brand)+1]; 
		// +1은 문자열의 마지막 null 또는 0까지 넣어주기 위함이다.
		strcpy(this->brand, brand);
		this->price = price;
	}

	~Car() {
		delete[] brand;
	}

	void printCar() {
		cout << "브랜드 : " << brand << "\n가격 : " << price << endl;
	}
};

//int count_num = 0; // 전역변수
//근데 전역변수로 선언하면 어디서든 다 접근할 수 있기 때문에 
// 신뢰가 가지 않는다. 클래스 안에 넣는 방법을 알아보자 ( 캡슐화와 은닉화 이용 ? static 이용)


class Count {
private:
	int value;
	static int count_num; // 스태틱해주면 

public:
	Count() {
		count_num++;
	}

	~Count() {
		count_num--;
	}

	void printNum() {
		cout << "현재 객체 개수 = " << count_num << endl;
	}
 };

int Count::count_num = 0; // :: 은 소속을 의미한다. 위치를 따진다.  , 자바에서는 :: 이거 안해도된다.
																								// 자동으로 컴파일 해준다.

int main() {

	//객체의 동적 생성
	Human* people1 = new Human;
	Human* people2 = new Human;
	
	people1->setAge(22);
	people2->setAge(30);


	people1->name="정현진";
	cout << people1->name << endl;
	cout << people1->getAge() << endl;
	cout << people2->getAge() << endl;

	delete people1, people2;
	//메모를 new 키워드를 사용하여 할당할 때, 
	//반드시 delete 키워드와 함께 짝을 이루도록 해야 메모리 누수가 발생하지 않는다.

	// 동적 할당이 아닌 바로 객체 생성
	Human people3;
	people3.name = "정현진";
	people3.setAge(19);
	people1->setAge(40);
	cout << "people1의 주소 : " << &people1 << endl;
	cout << "people3의 주소 : " << &people3 << endl;
	cout << people3.getAge() << endl;
	cout << people1->getAge() << endl;


	cout << endl;
	cout << "======================" << endl;
	cout << endl;


	Student s1 = Student(1, "정현진",20);
	Student s2;

	s1.printObj();
	s2.printObj();


	cout << endl;
	cout << "======================" << endl;
	cout << endl;


	Car car("페라리",40000);
	car.printCar();

	//car.~Car();
	//car.printCar();

	
	cout << endl;
	cout << "======================" << endl;
	cout << endl;


	Count c1;
	Count c2;
	Count c3;
	c1.printNum();

	Count* c4 = new Count;
	c1.printNum();
	delete c4;
	c1.printNum();

	c3.~Count();
	c3.printNum();















	return 0;
}