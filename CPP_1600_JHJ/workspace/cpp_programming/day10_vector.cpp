#define _CRT_SECURE_NOWARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

// vector 
// �Ϲ� �迭�� �������̶�� �������� ũ�Ⱑ ���ϱ� ������
// ��ü�� �߰��� ������ �����Ӵ�.

int main() {
	//vector�� ����
	vector<string> names;

	//vector ����� ���ÿ� �ʱ�ȭ
	//10ĭ¥�� ���Ͱ� ��������鼭 �ʱⰪ�� test�� ���� �ʱ�ȭ
	vector<string>test(10, "test");
	
	cout << names.size() << endl;

	//vector�� ������ �߰��ϱ�
	names.push_back("������1");
	names.push_back("������2");
	names.push_back("������3");


	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << endl;
	}
	cout << names.size() << endl;





	return 0;
}
