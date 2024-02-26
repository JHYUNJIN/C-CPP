#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
//#include<string.h>
//#include<stdlib.h>
#include<string>
using namespace std;


typedef	struct student {
	char name[10];
	int age;
	double height;
	double weight;
}s;

int main() {

	//int* temp = new int;
	//*temp = 49;

	//cout << "temp 안에 들어있는 값 : " << *temp << endl;
	//delete temp;

	//cout << "temp 안에 들어있는 값 : " << *temp << endl;

	//s* s1 = new s;
	//strcpy(s1->name, "정현진");
	//s1->age = 22;
	//s1->height = 177;
	//s1->weight = 60;

	//cout << "1번 학생의 이름은 " << s1->name << "이고 나이는 " << s1->age << "살 입니다." << endl;


	//int* ar = new int[5];
	//int temp;

	//for (int i = 0; i < 5; i++)	{
	//	cout << i + 1 << "번째 값 입력 : ";
	//	cin >> ar[i];
	//}
	//
	//for (int i = 0; i < 5; i++)	{
	//	cout << (i + 1) << "번째 값 : " << ar[i] << endl;
	//}

	//delete[] ar; // 배열의 메모리 할당 해제

	//string name;

	//cout << "이름을 입력하세요. : ";
	//getline(cin, name); // getline()은 string헤더파일에 정의되어 있다.
	//cout << "이름 : " << name << endl;


	//cout << "이름을 입력하세요. : ";
	//cin >> name;
	//cout << "이름 : " << name << endl;

	//cout << "name.length() : " << name.length() << endl;
	//cout << "name.size() : " << name.size() << endl;

	//for (int i = 0; i < name.length(); i++)	{
	//	cout <<i <<"번째 방의 문자 : " << name[i] << endl;
	//}


	////실습
	//string id;

	//

	//while (1)	{
	//cout << "주민번호를 입력해주세요 : ";
	//cin >> id;
	//	//int i=0;
	//	id[6] = int(id[6]);
	//	if (id[6] == 1 || id[6] == 3) {
	//		cout << "남성입니다.";
	//	}
	//	else if (id[6] == 2 || id[6] == 4) {
	//		cout << "여성입니다.";
	//	}
	//	else {
	//		cout << "주민번호가 잘못되었습니다.";
	//		continue;
	//	}
	//	//i++;
	//	break;
	//}
	//정수형으로 하려면 그 방법 밖에 없나요 하나만 꺼내와서 확인하고 돌려볼 순 없는건가요
	//안된군요 ㅉㅉ

	//while (1) {
	//	cout << "주민번호를 입력해주세요 : ";
	//	cin >> id;
	//	if (id[6]=='1'||id[6]=='3') {
	//		cout << "남성입니다.";
	//		break;
	//	}
	//	else if (id[6] == '2' || id[6] == '4') {
	//		cout << "여성입니다.";
	//		break;
	//	}
	//	else {
	//		cout << "다시 입력해주세요.";
	//	}
	//}



	//for (int i = 0; i < id.length(); i++)	{
	//	id[i] = int(id[i]);
	//	if (id[6]==1 || id[6]==3) {
	//		cout << "남성입니다.";
	//	}
	//	else if (id[6] == 2 || id[6] == 4) {
	//		cout << "여성입니다.";
	//	}
	//	else {
	//		cout << "주민번호가 잘못되었습니다.";
	//	}
	//}

	//string 클래스는 서식지정자를 사용할 수 없다 그러므로 printf 사용 불가능!!
	
	//int data;
	//string str;

	//// 표준입력 버퍼에 개행문자가 남아있게 된다.
	//cin >> data; // 개행문자(\n)가 남아있다.
	//cin.ignore(); // 버퍼를 비워준다.
	//getline(cin, str);
	////cin >> str;
	//cout << data << str << endl;

	bool flag = false;

	cout << "정수 1의 크기 : " << sizeof(1) << endl;
	cout << "정수 2의 크기 : " << sizeof(2) << endl;
	cout << "true의 크기 : " << sizeof(true) << endl;
	cout << "true의 값 : " << true << endl;
	cout << "false의 크기 : " << sizeof(false) << endl;
	cout << "false의 값 : " << flag << endl;





	return 0;
}