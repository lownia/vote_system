#include <iostream>
#include "voteManage.h"

using namespace std;


void voteManage::getCurVoteDetail()
{
	myVote.getlist(0);
	
}
void voteManage :: vote()//��ǥ�� ����� ������ ���� ��
{
	//���� �������� ��ǥ �����ֱ�
	node* cur = myVote.first->next;
	 cout << endl << "*���� �������� ��ǥ*" << endl; 
	 int nvote = 1;
	while (cur != myVote.end)
	{
		if (cur->tag == 0)
		{
			cout <<nvote<< ". ���� : " << cur->topic << endl;
			for (int i = 0; i < cur->itemN; i++)cout << i + 1 << ". " << cur->item[i] <<"("<<cur->result[i]<<")"<< endl;
			nvote++;
			//tag = 0 ���� �ð� ���
		}
		
		cur = cur->next;
	}
	cout << endl << endl;
	//////////////////////////////////////////////////
	//��ǥ
	cout << "��� ��ǥ�� �����Ͻðڽ��ϱ�? �Է� : ";
	int whatVote;
	cin >> whatVote;
	//�̹� ��ǥ�� ��ǥ�� �� �� �� ����.
	//if(already vote)
	//{cout<<"�̹� ��ǥ�� ��ģ ��ǥ�Դϴ�."<<endl;
	//cout<< "===============================" << endl << endl;
	//vote();}
	//////////////

	//���� �������� ��ǥ ��ȣ�� �������� ����
	int i;
	cur = myVote.first;
	for (i = 0; i < whatVote; i++)cur = cur->next;
	if (cur->tag != 0)
	{
		cout << "�ش� ��ǥ�� ���� ���� ���� ��ǥ�� �ƴմϴ�. �ٽ� �������ּ���" << endl;
		cout << "===============================" << endl << endl;
		vote();
	}

	////////////////////��ǥ�ϱ�///////////////////////
	cout << "*��ǥ ���� �׸�*" << endl;
	for (i = 0; i < cur->itemN; i++)
	{
		cout << i+1 << ". " << cur->item[i] << endl;
	}
	cout << "��� �׸��� �����Ͻðڽ��ϱ�? �Է� : ";
	int selected;
	cin >> selected;
	//��ǥ �׸� ��ȣ�� �߸� ������.
	while (selected <1 || selected >cur->itemN)
	{
		cout << "1 ~ " << cur->itemN << "������ ���� ������ �ּ���. �Է� :";
		cin >> selected;
	}

	cur->result[selected - 1]++;
	cout << "��ǥ�� �������ּż� �����մϴ�." << endl;
	cout << "=====================================" << endl << endl;
	
}
void voteManage:: getScdVoteDetail()
{
	myVote.getlist(1);
}
void voteManage:: getCmpVoteDetail() {
	myVote.getlist(2);
}