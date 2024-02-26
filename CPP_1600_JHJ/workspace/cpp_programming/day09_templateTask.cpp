#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

//�迭�� �Ű������� �Ѱܼ� �ִ밪�� �����ϴ� �Լ� �ۼ�
template<typename T>
T Max(T ar[], int size) {
	T max = ar[0];
	int i = 1;
	while (i < size) { // index��ȣ�� �迭�� size -1 �̱� ������ �̸����� ����ش�.
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



//�迭 ������ �Ű������� �Ѿ� �� ���ڰ� � �������� ȸ���� ���� �Լ� �ۼ�
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
		cout << "�̸� : " + name << endl;
		cout << "Ű : " << height << endl;
		cout << "������ : " << weight << endl;
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

	cout << "iar �迭�� �ִ밪 : " << Max(iar,size(iar)) << endl;
	cout << "dar �迭�� �ִ밪 : " << Max(dar,size(dar)) << endl;

	cout << "iar �迭�� �ִ밪 : " << findMax(iar,size(iar)) << endl;
	cout << "dar �迭�� �ִ밪 : " << findMax(dar,size(dar)) << endl;

	cout << endl;
	cout << "templateTask2===================================" << endl;
	cout << endl;

	int intAr[] = { 1, 4, 5, 7, 8, 5, 4, 5, 1, 2, 3, 5, 4, 5 };
	double douAr[] = { 5.5, 5.6, 5.5, 7.8, 7.7, 7.8, 2.2, 5.5, 2.2, 1.3, 4.4 };

	cout << "intAr value ���� : " << valueCount(intAr, size(intAr), 1) << endl;
	cout << "douAr value ���� : " << valueCount(douAr, size(douAr), 5.5) << endl;
	
	cout << "intAr value ���� : " << value_count(intAr, size(intAr), 1) << endl;
	cout << "douAr value ���� : " << value_count(douAr, size(douAr), 5.5) << endl;



	cout << endl;
	cout << "templateClass===================================" << endl;
	cout << endl;


	//���ø� Ŭ������ ��ü�� ���� �� �� ��ø� ������Ѵ�.
	PhysicalCheck<string,double,double> people1("������", 177.7, 60);
	PhysicalCheck<string,string,string> people2("������", "177.7cm", "60kg");
	people1.showCheck();
	people2.showCheck();


	cout << people1.getWeight() + 100.1 << endl;
	//string + ���� �� �� ����.
	//cout << people2.getWeight() + 100.1 << endl;





	









	return 0;
}