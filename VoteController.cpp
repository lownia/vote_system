#include "voteController.h"

voteController::voteController()
{
	s.myVote = myVote;
	m.myVote = myVote;
}
void voteController::UI_3()
{
	int inputTag;
	cout << "3.1 : ��ǥ ����" << endl;
	cout << "3.2 : �ǵ��ư���" << endl;
	cout << "�Է� : " << endl;
	cin >> inputTag;
	while (inputTag != 1 && inputTag != 2) {
		cout << "1�̳� 2�� �Է��Ͽ��ּ���." << endl;
		cin >> inputTag;
	}
	if (inputTag == 1)
	{
		s.Suggest();
		UI_3();
	}
	else {
		//�ǵ��ư���
		UI_4();
	}
}


void voteController::UI_4()
{
	int inputN;
	cout << "4.1 ���� ���� ���� ����Ʈ" << endl;
	cout << "4.2 ��ǥ" << endl;
	cout << "4.3 ���� ���� ������ ��ǥ ����Ʈ" << endl;
	cout << "4.4 ����� ��ǥ ����Ʈ" << endl;
	cout << "4.5 �ǵ��ư���" << endl;
	cout << "�Է� : ";
	cin >> inputN;
	switch (inputN)
	{
	case 1:
		m.getCurVoteDetail();
		UI_4();
		break;
	case 2:
		m.vote();
		UI_4();
		break;
	case 3:
		m.getScdVoteDetail();
		UI_4();
		break;
	case 4:
		m.getCmpVoteDetail();
		UI_4();
		break;
	case 5:
		UI_3();
		break;
	default:
		cout << "�߸��� ��ȣ�� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
		cout << "====================================" << endl;
		UI_4();
		break;
	}
}