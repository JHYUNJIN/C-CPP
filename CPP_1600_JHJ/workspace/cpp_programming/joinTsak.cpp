#define _CRT_SECURE_NOWARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Member {
private:
	string id;
	string pw;
	string name;

public:
	Member() {  }
	Member(string id, string pw, string name) :id(id), pw(pw), name(name) {  }

	string getId() {
		return id;
	}
	string getPw() {
		return pw;
	}
	string getName() {
		return name;
	}

	void setPw(string modify_pw) {
		this->pw = modify_pw;
	}
	void setName(string modify_name) {
		this->name = modify_name;
	}

	void printData() {
		cout << "���̵� : " << id << endl;
		cout << "��й�ȣ : " << pw << endl;
		cout << "�̸� : " << name << endl;
	}

};

class MemberField {
public:
	vector<Member> members;

	//���̵� �ߺ��˻�
	int checkId(string id) {
		for (int i = 0; i < members.size(); i++) {
			if (members[i].getId() == id) {
				return i; //�Ű������� �Ѿ���� id�� �ش��ϴ� �ε��� ��ȣ�� ����
			}
		}
		return -1;
	}

//ȸ������
void join(string id, string pw, string name) {
	Member member(id, pw, name);
	members.push_back(member);
}

//�α���
int login(string id, string pw) {
	int index = checkId(id);
	Member member = members[index];
	if (member.getPw()==pw)	{
		return index;
	}
	return -1;
}

//�̸�����
void updateName(int index,string name) {
	members[index].setName(name);
}

//��й�ȣ����
void updatePw(int index,string pw) {
	members[index].setName(pw);
}




};

int main() {

	MemberField mf;
	Member loginMember;
	string mainMsg = "�ȳ��ϼ���. Ȩ�������� ���Ű��� ȯ���մϴ�.\n���� �޴��� �������ּ���.";
	string menuMsg = "1.ȸ������\n2.�α���\n3.����";
	string myPageMsg = "1.�� ���� ����\n2.�� ���� ����\n3.�α׾ƿ�";
	string modifyMsg = "1.�̸� ����\n2.��й�ȣ ����\n3.������";
	string idMsg = "���̵� : ";
	string pwMsg = "��й�ȣ : ";
	string nameMsg = "�̸� : ";
	string idErrMsg = "���̵� �Ǵ� ��й�ȣ�� ��ġ���� �ʽ��ϴ�.";
	string id, pw, name;
	int choice = 0,loginIdx=0;

	//mf.members.push_back(Member("qwe", "qwe", "qwe"));

	while (choice != 3) {
		cout << mainMsg << endl;
		cout << menuMsg << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << idMsg << endl;
			cin >> id;
			if (mf.checkId(id) != -1) {
				cout << "�ش� ���̵� �����մϴ�." << endl;
				continue;
			}
			//else {
			//	cout << "��� ������ ���̵��Դϴ�." << endl;
			//}
			cout << pwMsg << endl;
			cin >> pw;
			cout << nameMsg << endl;
			cin >> name;
			mf.join(id, pw, name);
			cout << "ȸ�����Կ� �����Ͽ����ϴ�." << endl;
			break;

		case 2:
			cout << idMsg << endl;
			cin >> id;
			cout << pwMsg << endl;
			cin >> pw;

			if (mf.login(id, pw) == -1) {
				cout << idErrMsg << endl;
				break;
			}
			cout << "�α��� ����" << endl;
			loginIdx = mf.checkId(id);
			loginMember = mf.members[loginIdx];

			while (true) {
				cout << myPageMsg << endl;
				cin >> choice;

				if (choice == 3) { break; }
				else if (choice == 1) {
					loginMember.printData();
				}
				else if (choice == 2) {
					while (true) {
						cout << modifyMsg << endl;
						cin >> choice;
						if (choice == 3) { break; }
						else if (choice == 1) {
							cout << "���� �̸� :" << loginMember.getName() << endl;
							cout << "���� �� " + nameMsg << endl;
							cin >> name;
							loginMember.setName(name);
							mf.updateName(loginIdx, name);
							cout << "�̸����� ����" << endl;
						}
						else {
							cout << "���� ��й�ȣ :" << loginMember.getPw() << endl;
							cout << "���� �� ��й�ȣ :" << endl;
							cin >> pw;
							loginMember.setName(pw);
							mf.updatePw(loginIdx, pw);
							cout << "��й�ȣ�� �����Ͽ����ϴ�." << endl;
						}
					}
				}
			}
			break;

		case 3:
			cout << "���α׷��� �����մϴ�.\n" << endl;
			break;

		default:
			cout << "�ٽ� �Է����ּ���" << endl;
			break;
		}
	}











	return 0;
}