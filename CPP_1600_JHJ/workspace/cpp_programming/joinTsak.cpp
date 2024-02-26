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
		cout << "아이디 : " << id << endl;
		cout << "비밀번호 : " << pw << endl;
		cout << "이름 : " << name << endl;
	}

};

class MemberField {
public:
	vector<Member> members;

	//아이디 중복검사
	int checkId(string id) {
		for (int i = 0; i < members.size(); i++) {
			if (members[i].getId() == id) {
				return i; //매개변수로 넘어오는 id에 해당하는 인덱스 번호를 리턴
			}
		}
		return -1;
	}

//회원가입
void join(string id, string pw, string name) {
	Member member(id, pw, name);
	members.push_back(member);
}

//로그인
int login(string id, string pw) {
	int index = checkId(id);
	Member member = members[index];
	if (member.getPw()==pw)	{
		return index;
	}
	return -1;
}

//이름변경
void updateName(int index,string name) {
	members[index].setName(name);
}

//비밀번호변경
void updatePw(int index,string pw) {
	members[index].setName(pw);
}




};

int main() {

	MemberField mf;
	Member loginMember;
	string mainMsg = "안녕하세요. 홈페이지에 오신것을 환영합니다.\n서비스 메뉴를 선택해주세요.";
	string menuMsg = "1.회원가입\n2.로그인\n3.종료";
	string myPageMsg = "1.내 정보 보기\n2.내 정보 변경\n3.로그아웃";
	string modifyMsg = "1.이름 변경\n2.비밀번호 변경\n3.나가기";
	string idMsg = "아이디 : ";
	string pwMsg = "비밀번호 : ";
	string nameMsg = "이름 : ";
	string idErrMsg = "아이디 또는 비밀번호가 일치하지 않습니다.";
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
				cout << "해당 아이디가 존재합니다." << endl;
				continue;
			}
			//else {
			//	cout << "사용 가능한 아이디입니다." << endl;
			//}
			cout << pwMsg << endl;
			cin >> pw;
			cout << nameMsg << endl;
			cin >> name;
			mf.join(id, pw, name);
			cout << "회원가입에 성공하였습니다." << endl;
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
			cout << "로그인 성공" << endl;
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
							cout << "현재 이름 :" << loginMember.getName() << endl;
							cout << "변경 할 " + nameMsg << endl;
							cin >> name;
							loginMember.setName(name);
							mf.updateName(loginIdx, name);
							cout << "이름변경 성공" << endl;
						}
						else {
							cout << "현재 비밀번호 :" << loginMember.getPw() << endl;
							cout << "변경 할 비밀번호 :" << endl;
							cin >> pw;
							loginMember.setName(pw);
							mf.updatePw(loginIdx, pw);
							cout << "비밀번호를 변경하였습니다." << endl;
						}
					}
				}
			}
			break;

		case 3:
			cout << "프로그램을 종료합니다.\n" << endl;
			break;

		default:
			cout << "다시 입력해주세요" << endl;
			break;
		}
	}











	return 0;
}