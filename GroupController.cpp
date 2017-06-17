#include "GroupController.h"

GroupController::GroupController() { currID = "B411006"; }
GroupController::~GroupController() {}

void GroupController::UI_5() {
	int tmp;

	system("cls");
	cout << "5.1 ��ü �׷� ��ȸ" << endl;
	cout << "5.2 �׷� ����" << endl;
	cout << "5.3 �׷� ����" << endl;
	cout << "5.4 ���� �׷� ��ȸ" << endl;
	cout << "5.5 �׷� Ż��" << endl;
	cout << "0.  ���θ޴��� ���ư���" << endl << endl;
	cout << "*�Է¼��� : ";
	cin >> tmp;

	switch (tmp)
	{
	case 0:
		system("cls");
		cout << "���α׷��� �����մϴ�." << endl << endl;
		exit(0);
		break;
	case 1:
		show_group_UI();
		break;
	case 2:
		join_group_UI();
		break;
	case 3:
		make_group_UI();
		break;
	case 4:
		info_group_UI();
		break;
	case 5:
		drop_group_UI();
		break;
	default:
		UI_5();
		break;
	}
}

void GroupController::show_group_UI() {
	system("cls");
	cout << "5.1 ��ü �׷� ��ȸ" << endl;

	G.show_Group();

	system("pause");
	UI_5();
}

void GroupController::join_group_UI() {
	int tmp;

	system("cls");
	cout << "5.2 �׷� ����" << endl;

	G.join_Group();

	system("pause");
	UI_5();
}

void GroupController::make_group_UI() {
	string name, info;

	system("cls");
	cout << "5.3 �׷� ����" << endl;
	cout << "�׷�� : ";
	cin >> name;
	cout << "�׷����� : ";
	cin >> info;

	G.make_Group(name, info, currID);

	cout << endl;
	cout << "�׷��� �����Ǿ����ϴ�." << endl;
	cout << "����� [�׷������]�� ����Ǿ����ϴ�." << endl << endl;
	system("pause");
	UI_5();
}

void GroupController::info_group_UI() {
	system("cls");
	cout << "5.4 ���� �׷� ��ȸ" << endl;

	G.info_Group(currID);

	system("pause");
	UI_5();
}

void GroupController::drop_group_UI() {
	int tmp;

	system("cls");
	cout << "5.5 �׷� Ż��" << endl;
	cout << "���� Ż���Ͻðڽ��ϱ�?" << endl;
	cout << "1.Yes / 2.No : ";
	cin >> tmp;

	switch (tmp)
	{
	case 1:
		G.drop_Group();

		cout << endl;
		cout << "�׷��� Ż���߽��ϴ�." << endl;
		cout << "����� [ȸ��]���� ����Ǿ����ϴ�." << endl << endl;
		system("pause");
	case 2:
		UI_5();
		break;
	default:
		drop_group_UI();
		break;
	}
}
