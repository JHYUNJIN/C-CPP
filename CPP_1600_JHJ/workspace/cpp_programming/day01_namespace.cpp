#include<iostream>
using namespace std;

int main() {

//
//// C++ 의 출력
//
//	// C언어를 포함한 대부분의 언어는 ()안에 출력할 값을 넣어주는 반면
//	 //C++ 에서는 << 연산자 뒤에 값을 넣어주면 된다.
//
//	std::cout << "Hello" << std::endl;
//	std::cout << "정현진" << std::endl;
//
//	//자료형을 고려할 필요가 없다.
//	std::cout << "1일차. 반갑습니다." << std::endl;
//	std::cout << 30 << std::endl;
//	std::cout << 25.852 << std::endl;
//
//	// 한번에 여러 개의 값을 출력할 때 << 로 연결해주면 된다.
//	int temp = 777;
//	int temp1 = 123;
//	std::cout << "변수 temp에 들어있는 값은 " << temp<<temp1 << "이다." << std::endl;
//
//	//cout을 한번만 쓰고 다음 문장을 출력하라
//	// 안녕하세요 제 이름은 정현진입니다.
//	// 나이는 22살입니다.
//
//	std::cout << "안녕하세요. 정현진입니다." << std::endl << "나이는 " << temp1 <<"살 입니다." << std::endl;
//	printf("안녕하세요. 제 이름은 정현진입니다.\n나이는 22살입니다.");
//


	//int my_age;
	//std::cout << "나이 : ";
	//// 자료형을 고려하지 않아도 된다.
	//std::cin >> my_age;

	//std::cout << "나이는 " << my_age << "살 입니다." << std::endl;



	//int my_age;
	//cout << "나이 : ";
	//// 자료형을 고려하지 않아도 된다.
	//cin >> my_age;
	//cout << "나이는 " << my_age << "살 입니다." << endl;

	//실습
	string name;
	int age;

	cout << "이름 : ";
	cin >> name;
	cout << "나이 : ";
	cin >> age;
	cout << "안녕하세요. " << endl <<age<<"살 " << name<<"입니다." << endl;





	return 0;
}