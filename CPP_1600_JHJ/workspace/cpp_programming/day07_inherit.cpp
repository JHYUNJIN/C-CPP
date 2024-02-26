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


// ���� ��� ���� �ڽ� Ŭ����
// �θ� Ŭ�������� ��� �׼��� ������ ���ε��� �ؾ��Ѵ�.
// �����ϸ� ����Ʈ�� private
class Child : public Parent1,public Parent2 {
private:
	string grade; // ����

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

// ��� ���� ��, �ϳ��� Ŭ������ �ι� ��� �޴� ���
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
	// ���� ����� �߱� ������
	// B, C�� ��ӹ��� A �����ڸ� D������ ȣ��������Ѵ�.
	D(int a, int b, int c, int d):A(a),B(a,b),C(a,c),d(d){}

	void printData() {
		//cout << a << endl; // ��ȣ�� ����
		cout << B::a << endl; // ��� a���� �Ҽ��� �˷��ָ�ȴ�.
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
		//superFunction(); // ��� �θ��� �޼ҵ����� ������ �� �� ����.
		Super1::superFunction();
	}
};


//���� ���
//�ڽ� �ΰ��� �ϳ��� �θ� Ŭ������ ���� �����ϰ� �� ���
//������ �ڽĵ� �ϳ��� A Ŭ������ ����� ������ �� �ִ�.



int main() {

	Child child("������", 30, "A");

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