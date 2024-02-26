#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    char* name;
    int age;

    Animal(const char* name, int age) {
        cout << "�ʱ�ȭ ������ ȣ�� ��" << endl;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->age = age;
    }

    void printObj() {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << age << endl;
    }


    Animal(const Animal& a) {
        cout << "���� ������ ȣ��" << endl;
        name = new char[strlen(a.name) + 1];
        strcpy(name, a.name);
        age = a.age;
    }

};
class Human {
public:
    string name;
    int age;

    Human(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void print_Obj() {
        cout << "�̸� : " << name << endl;
        cout << "���� : " << age << endl;
    }
};

int main() {
    Animal cat1("����", 1); // �ʱ�ȭ ������ ȣ��
    Animal ca2(cat1); // ���� ������ ȣ��
    //Animal cat2 = cat1; // ���� ������ ȣ�� , �̷��Ե� ȣ�� ����

    cat2.age = 5;
    strcpy(cat2.name, "�踻��");
    //cat2.name = "�踻��"; // name�� �ּҸ� ����Ű�� �ֱ⶧���� ���������� ���� ������ �� ����.

    cat1.printObj();
    cat2.printObj();

    Human people1("������", 20);
    Human people2=people1;

    people2.age = 20;
    people2.name = "jin";

    people1.print_Obj();
    people2.print_Obj();



}