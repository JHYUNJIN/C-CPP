#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

class Parent1 {
private:
	string name;
public :
	Parent1(string name) :name(name){}
	void testFunction1() {
		cout << "test function1" << endl;
	}
};

class Parent2 {
private:
	int age;
public:
	Parent2(int age) :age(age){}
	void testFunction2() {
		cout << "test function2" << endl;
	}
};


// 다중 상속 받을 자식 클래스
// 부모 클래스마다 상속 액세스 지정은 따로따로 해야한다.
// 생략하면 디폴트는 private
class Child : public Parent1,public Parent2 {
private:
	string grade; // 학점

public:
	Child(string name, int age, string grade) :Parent1(name), Parent2(age), grade(grade) {}
	

	void childFunction() {
		testFunction1();
		testFunction2();
	}
};


class A {
protected:
	int a;

public:
	A(int a) :a(a){}
};

// 상속 받을 때, 하나의 클래스를 두번 상속 받는 경우
class B : public virtual A {
protected:
	int b;

public:
	B(int a, int b) :A(a), b(b) {}
};

class C : public virtual A {
protected:
	int c;

public:
	C(int a, int c) :A(a), c(c) {}
};

class D : public B, public C {
protected:
	int d;

public:
	// 간접 상속을 했기 때문에
	// B, C가 상속받은 A 생성자를 D에서도 호출해줘야한다.
	D(int a, int b, int c, int d):A(a),B(a,b),C(a,c),d(d){}

	void printData() {
		//cout << a << endl; // 모호성 에러
		cout << B::a << endl; // 어디 a인지 소속을 알려주면된다.
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
		cout << d << endl;
	}
};

class Super1 {
public:
	void superFunction() {
		cout << "superfunction1" << endl;
	}
};

class Super2 {
public:
	void superFunction() {
		cout << "superfunction2" << endl;
	}
};

class Sub : public Super1, public Super2 {
public:
	void subFuntion() {
		//superFunction(); // 어느 부모의 메소드인지 구분을 할 수 없다.
		Super1::superFunction();
	}
};


//간접 상속
//자식 두개가 하나의 부모 클래스를 서로 공유하게 할 경우
//마지막 자식도 하나의 A 클래스의 멤버가 존재할 수 있다.



int main() {

	Child child("정현진", 30, "A");

	child.childFunction();
	child.testFunction1();
	child.testFunction2();

	D d(1, 2, 3, 4);
	d.printData();

	Sub sub;
	sub.subFuntion();

	sub.Super2::superFunction();



	return 0;
}