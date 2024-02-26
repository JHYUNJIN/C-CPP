#define _CRT_SECURE_NOWARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

// vector 
// 일반 배열과 차이점이라면 동적으로 크기가 변하기 떄문에
// 객체의 추가와 삭제가 자유롭다.

int main() {
	//vector의 선언
	vector<string> names;

	//vector 선언과 동시에 초기화
	//10칸짜리 벡터가 만들어지면서 초기값은 test로 전부 초기화
	vector<string>test(10, "test");
	
	cout << names.size() << endl;

	//vector에 데이터 추가하기
	names.push_back("정현진1");
	names.push_back("정현진2");
	names.push_back("정현진3");


	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << endl;
	}
	cout << names.size() << endl;





	return 0;
}
