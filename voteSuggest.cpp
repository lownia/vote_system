#include <iostream>
#include "voteSuggest.h"

using namespace std;

	void voteSuggest :: Suggest()
	{
		
			node* newVote = new node;
			cout << "��ǥ ������ �����Դϱ�?" << endl;
			cout << "�Է� : " << endl;
			cin >> newVote->topic;
			cout << "�� ���� �׸��� �ְڽ��ϱ�?(�ִ� 100��)" << endl;
			cout << "�Է� : " << endl;
			cin >> newVote->itemN;
			while (newVote->itemN > 100 || newVote->itemN < 0)
			{
				cout << "�׸��� ���� 0-100 ������ ���� ���ּ���." << endl;
				cout << "�Է� : " << endl;
				cin >> newVote->itemN;
			}
			for (int i = 0; i < newVote->itemN; i++)
			{
				cout << i+1 << "��° �׸��� �����Դϱ�?" << endl;
				cout << "�Է� : ";
				cin >> newVote->item[i];
				newVote->result[i] = 0;
			}

			// ���� �ð� �� ���� �ð� ���ϱ�
			// ������ ����

			newVote->tag = 0;
			//������/���࿹�� ���� ����.
			newVote->next = myVote.end;
			myVote.insert(newVote);
			cout << "*�߰��Ǿ����ϴ�*" << endl;
			cout << "===================" << endl;

		
	}