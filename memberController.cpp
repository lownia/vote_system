#include "memberController.h"
using namespace std;
void MemberController::UI_1() {
	int check;
	//system("cls")
	cout << "1.Join" << endl << "2.Withdraw" << endl << "0.���� �޴��� ���ư���" << endl << "*�Է� ���� : ";
	cin >> check;

	while (check) {
		if (check == 1) {
			//join_mem();
			//system("pause")
			break;
		}
		else if (check == 2) {
			//withdraw_mem();
			//system("pause")
			break;
		}
		else {
			cout << "�ٽ� �Է��ϼ���!" << endl << "*�Է� ���� : ";
			cin >> check;
		}
	}
}



void MemberController::UI_2() {
	int check;
	//system("cls")
	cout << "1.LOGIN" << endl << "2.LOGOUT" << endl << "0.���� �޴��� ���ư���" << endl << "*�Է� ���� : ";
	cin >> check;

	while (check) {
		if (check == 1) {
			//login();
			//system("pause")
			break;
		}
		else if (check == 2) {
			//logout();
			//system("pause")
			break;
		}
		else {
			cout << "�ٽ� �Է��ϼ���!" << endl << "*�Է� ���� : ";
			cin >> check;
		}
	}
}


void MemberController::UI_7() {
	int check;
	//system("cls")
	cout << "1.LOGIN" << "0.���� �޴��� ���ư���" << endl << "*�Է� ���� : ";
	cin >> check;

	while (check) {
		if (check == 1) {
			//relogin();
			//system("pause")
			break;
		}
		else {
			cout << "�ٽ� �Է��ϼ���!" << endl << "*�Է� ���� : ";
			cin >> check;
		}
	}
}

