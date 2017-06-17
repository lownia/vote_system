#include "setTime.h"
using namespace std;

Time::Time() {
	timeStamp_start.tv_sec = 0;
	timeStamp_start.tv_usec = 0;
	timeStamp_end.tv_sec = 0;
	timeStamp_end.tv_usec = 0;
	realtime_start = NULL;
	realtime_end = NULL;
}

void Time::setStartTime() {
	time_t long_time;
	time(&long_time);
	realtime_start = localtime(&long_time);
}


void Time::setEndTime() {
	time_t long_time;
	time(&long_time);
	realtime_end = localtime(&long_time);
}


int Time::printStartTime() {
	if (realtime_start == NULL) {
		cout << "time not set yet" << endl;
		return 0;
	}

	cout << realtime_start->tm_year + 1900 << "�� ";
	cout << realtime_start->tm_mon + 1 << "�� ";
	cout << realtime_start->tm_mday << "�� ";
	cout << realtime_start->tm_hour << "�� ";
	cout << realtime_start->tm_min << "�� ";
	cout << realtime_start->tm_sec << "��" << endl;
	return 1;
}

int Time::printEndTime() {
	if (realtime_end == NULL) {
		cout << "time not set yet" << endl;
		return 0;
	}
	cout << realtime_start->tm_year + 1900 << "�� ";
	cout << realtime_start->tm_mon + 1 << "�� ";
	cout << realtime_start->tm_mday << "�� ";
	cout << realtime_start->tm_hour << "�� ";
	cout << realtime_start->tm_min << "�� ";
	cout << realtime_start->tm_sec << "��" << endl;
	return 1;
}



CurTimeController::CurTimeController() {
	time_t long_time;
	time(&long_time);
	curTime = localtime(&long_time);//����ð� �ý������κ��� �ҷ���
									//DB�κ��� �ֱ����ٽð� �ҷ��;���
}


void CurTimeController::UI_6() {
	int input;
	cout << "����ð� ���� �޴��Դϴ�" << endl;
	cout << "1. ����ð� ���� " << endl;
	cout << "2. �ǵ��ư���" << endl;
	cout << "*�Է� ����: ";
	cin >> input;
	if (input == 1)
		cout << "����ð� ���� �Ϸ�" << endl;
}
