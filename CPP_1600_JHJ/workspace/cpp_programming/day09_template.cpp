#define _CRT_SECURE_NOWARNINGS
#include<iostream>

using namespace std;

int sum1(int num1, int num2) {
	return num1 + num2;
}

template<class T>
T sum2(T num1, T num2) {
	return num1 + num2;
}

void printData1(string a, int b, double c) {
	cout << "=====printData1 ����=====" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "=====printData1 ����=====" << endl;
}

template<class T1, class T2, class T3>
void printData2(T1 a, T2 b, T3 c) {
	cout << "=====printData2 ����=====" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "=====printData2 ����=====" << endl;
}


int main() {

	cout << sum1(1, 19) << endl;

	//�Ҽ����� �ڸ��� �����ֳ� ?
	//cout << sum1(1.7, 19.8) << endl;
	//templete�� ����ϸ� ����� ������ �� �ִ�.
	cout << sum2(1.7, 19.8) << endl;



	//���ڿ��� ���̷�Ʈ�� �����ϸ� stringŸ������ �ν����� �ʰ�
	//�����ͷ� �ν��ϱ� ������ +������ �۵����� �ʴ´�.
	//cout << sum2("�ݿ���", "������")<<endl;
	//cout << "�ݿ���"+ "������"<<endl;


	//string Ŭ���� �ȿ��� + �����ڰ� �����ε� �Ǿ��ֱ� ������ �����ϴ�.
	string data1 = "��";
	string data2 = "����";
	cout << data1 + data2 << endl;
	cout << sum2(data1, data2) << endl;
	cout << sum2<string>(data1, data2) << endl;

	//sum2�Ű����� ��� ���� Ÿ���� �� ��밡���ϴ�.
	//cout << sum2(data2 + 1) << endl;
	//���ڿ� + ���� �Ұ����ϴ�.
	//cout << data1 + 3 << endl;
	//
	cout << 1.2 + 3 << endl; // �̰� �Ǽ������� �� �����ֳ�
	printData1("������", 22, 177.7);
	printData2("������", 23, 12.5);

	//�Լ��� ����� �� ���ø��� �� �ڷ����� �츮�� ������ �� �ִ�.
	//��, �Լ��� ȣ���� �� Ÿ���� ������ �� �ִ�.
	printData2<string, int, double>("������", 12, 12.3);

	//���ø� �Լ�������, �Լ��� ȣ���ϴ� �κп� Ÿ���� �����߱⶧����
	//Ÿ���� ���� �ʴ´ٸ� ������� �ʴ´�.
	//printData2<string, int, double>(12, "������", 12.3);









	
	return 0;
}