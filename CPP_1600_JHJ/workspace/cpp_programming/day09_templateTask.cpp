#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

//배열을 매개변수로 넘겨서 최대값을 리턴하는 함수 작성
template<typename T>
T Max(T ar[], int size) {
	T max = ar[0];
	int i = 1;
	while (i < size) { // index번호는 배열의 size -1 이기 때문에 미만으로 잡아준다.
		if (max < ar[i]){
		max=ar[i];
		}
		i++;
	}
	return max;
}

template<typename T>
T findMax(const T ar[], int size) {
	T max = ar[0];

	for (int i = 1; i < size; i++) {
		if (max < ar[i]) {
			max = ar[i];
		}
	}
	return max;
}



//배열 내에서 매개변수로 넘어 온 숫자가 몇변 나오는지 회수를 세는 함수 작성
template<typename T>
int valueCount(const T ar[],int size,T value){
	int count = 0;
	
	for (int i = 0; i < size; i++)	{
		if (ar[i] == value) {
			count++;
		}
	}
	return count;
}

template<typename T>
int value_count(const T ar[], int size, T value) {
	int count = 0;
	int i = 0;
	while (i<size)	{
		if (ar[i] == value) {
			count++;
		}
		i++;
	}
	return count;
}

template<typename T1, typename T2, typename T3>
class PhysicalCheck {
private:
	T1 name;
	T2 height;
	T3 weight;

public:
	PhysicalCheck(T1 name, T2 height, T3 weight) 
		:name(name), height(height), weight(weight) {}

	void showCheck() {
		cout << "이름 : " + name << endl;
		cout << "키 : " << height << endl;
		cout << "몸무게 : " << weight << endl;
	}

	T2 getWeight() {
		return weight;
	}

	T3 getHeight() {
		return height;
	}
};







int main() {




	cout << "templateTask1===================================" << endl;

	int iar[] = { 1,2,3,4,5 };
	double dar[] = { 1.23,4.32,2.34,5.66,9.76 };

	cout << "iar 배열의 최대값 : " << Max(iar,size(iar)) << endl;
	cout << "dar 배열의 최대값 : " << Max(dar,size(dar)) << endl;

	cout << "iar 배열의 최대값 : " << findMax(iar,size(iar)) << endl;
	cout << "dar 배열의 최대값 : " << findMax(dar,size(dar)) << endl;

	cout << endl;
	cout << "templateTask2===================================" << endl;
	cout << endl;

	int intAr[] = { 1, 4, 5, 7, 8, 5, 4, 5, 1, 2, 3, 5, 4, 5 };
	double douAr[] = { 5.5, 5.6, 5.5, 7.8, 7.7, 7.8, 2.2, 5.5, 2.2, 1.3, 4.4 };

	cout << "intAr value 개수 : " << valueCount(intAr, size(intAr), 1) << endl;
	cout << "douAr value 개수 : " << valueCount(douAr, size(douAr), 5.5) << endl;
	
	cout << "intAr value 개수 : " << value_count(intAr, size(intAr), 1) << endl;
	cout << "douAr value 개수 : " << value_count(douAr, size(douAr), 5.5) << endl;



	cout << endl;
	cout << "templateClass===================================" << endl;
	cout << endl;


	//템플릿 클래스는 개체를 만들 때 꼭 명시를 해줘야한다.
	PhysicalCheck<string,double,double> people1("정현진", 177.7, 60);
	PhysicalCheck<string,string,string> people2("정현진", "177.7cm", "60kg");
	people1.showCheck();
	people2.showCheck();


	cout << people1.getWeight() + 100.1 << endl;
	//string + 숫자 할 수 없다.
	//cout << people2.getWeight() + 100.1 << endl;





	









	return 0;
}