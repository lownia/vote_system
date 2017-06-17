#include <iostream>
#include <stdlib.h>
#include "login_logout.h"
#include "voteSuggest.h"
#include "voteManage.h"
#include "GroupController.h"
#include "setTime.h"
#include "memberController.h"
#include "user.h"
#include "voteController.h"

#define NOT_MEMBER 0
#define MEMBER 1
#define GROUP_MEMBER 2
#define GROUP_MANAGER 3

using namespace std;

int inputMenu() {
	int input;
	cout << "*�Է� ���� :";
	cin >> input;
	return input;
}


void printMenu() {
	cout << "1. ȸ������/Ż��" << endl;
	cout << "2. �α���/�α׾ƿ�" << endl;
	cout << "3. ��ǥ����" << endl;
	cout << "4. ��ǥ����" << endl;
	cout << "5. �׷����" << endl;
	cout << "6. ����ð� ����" << endl;
	cout << "7. Session����/����" << endl;
	cout << "8. ����" << endl;
}

void printException(int lev) {
	switch (lev) {
	case NOT_MEMBER:
		cout << "���� �Ұ��� �մϴ�" << endl;
		break;

	case MEMBER:
		cout << "��� �̻� ���� �����մϴ�" << endl;
		break;

	case GROUP_MEMBER:
		cout << "�׷��� �̻� ���� �����մϴ�" << endl;
		break;

	case GROUP_MANAGER:
		cout << "�׷������/������ �̻� ���� �����մϴ�" << endl;
		break;

	default:
		cout << "�˼����� ����" << endl;
		break;
	}
}

User user;
GroupController gc;
voteController vc;
MemberController mc;
CurTimeController tc;

void changeUI(int menu) {
	switch (menu) {
	case 1://ȸ������,Ż��
		mc.UI_1();
		break;
	case 2://�α���,�α׾ƿ�
		mc.UI_2();
		break;
	case 3://��ǥ ����
		if (user.returnLevel()<GROUP_MEMBER)//�׷�� �̻�
			printException(GROUP_MEMBER);
		else
			vc.UI_3();
		break;
	case 4://��ǥ ����
		if (user.returnLevel()<GROUP_MANAGER)//�׷� �Ŵ����� ����
			printException(GROUP_MANAGER);
		else
			vc.UI_4();
		break;
	case 5://�׷� ����
		if (user.returnLevel()<MEMBER)//ȸ�� �̻� ����
			printException(MEMBER);
		else
			gc.UI_5();
		break;
	case 6://����ð� ����
		if (user.returnLevel()<MEMBER)//ȸ�� �̻� ����
			printException(MEMBER);
		else
			tc.UI_6();
		break;
	case 7://session ����,����
		if (user.returnLevel()<MEMBER)//ȸ���� ��쿡�� ����
			printException(MEMBER);
		else
			mc.UI_7();
		break;
	case 8://����
		cout << "���α׷��� �����մϴ�" << endl;
		exit(0);
		break;

	default:
		break;
	}
}


int main(int argc, const char * argv[]) {
	while (1) {
		int menu = 0;
		printMenu();
		menu = inputMenu();
		if (menu>8 || menu<1) {
			cout << "1~8������ ������ �Է� �����մϴ�" << endl;
			cout << endl << endl;;
			continue;
		}
		changeUI(menu);
		cout << endl << endl;;
	}

	return 0;
}
