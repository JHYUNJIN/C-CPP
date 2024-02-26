#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    char* name;
    int age;

    Animal(const char* name, int age) {
        cout << "초기화 생성자 호출 됨" << endl;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->age = age;
    }

    void printObj() {
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }


    Animal(const Animal& a) {
        cout << "복사 생성자 호출" << endl;
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
        cout << "이름 : " << name << endl;
        cout << "나이 : " << age << endl;
    }
};

int main() {
    Animal cat1("나비", 1); // 초기화 생성자 호출
    Animal ca2(cat1); // 복사 생성자 호출
    //Animal cat2 = cat1; // 복사 생성자 호출 , 이렇게도 호출 가능

    cat2.age = 5;
    strcpy(cat2.name, "김말이");
    //cat2.name = "김말이"; // name은 주소를 가리키고 있기때문에 직접적으로 값을 대입할 수 없다.

    cat1.printObj();
    cat2.printObj();

    Human people1("정현진", 20);
    Human people2=people1;

    people2.age = 20;
    people2.name = "jin";

    people1.print_Obj();
    people2.print_Obj();



}