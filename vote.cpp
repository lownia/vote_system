#include <iostream>
#include "vote.h"

using namespace std;


	Vote :: Vote()
	{
		first = new node;
		end = new node;
		first->next = end;
		first->tag = -1;
		first->topic = "no topic";
		first->itemN = 0;
	}
	void Vote::deleteByTime()
	{
		//�ð� check�� ���� �ð��� �� Vote ����
		node * cur = first;
		int i = 0;
		while (cur != end)
		{
			i++;
			//if(�ð� üũ/tag üũ) 
			//Delete(i); 
			cur = cur->next;
		}
	}
	
	void Vote :: insert(node *v)
	{
		node * cur = first;
		while (cur->next != end) cur = cur->next;
		v->next = end;
		cur->next = v;
	}
	void Vote :: getlist(int tag)
	{
		node* cur = first->next;
		if (tag == 0) { cout << endl << "*���� �������� ��ǥ*" << endl; }
		else if (tag == 1) { cout << endl << "*���� ������ ��ǥ*" << endl; }
		else { cout << endl << "*����� ��ǥ*" << endl; }
		while (cur != end)
		{
			if (cur->tag == tag)
			{
				cout << "���� : " << cur->topic << endl;
				for (int i = 0; i < cur->itemN; i++)cout << i + 1 <<". "<< cur->item[i] << endl;
				//tag = 0 ���� �ð� ���
				//tag = 1 ���۽ð� �� ���� �ð� ���
				//tag = 2 ��� ���
			}
			cur = cur->next;
		}
		cout << endl << endl;
	}
	void Vote:: Delete(int index)
	{
		node* cur = first;
		node* temp;
		for (int i = 1; i < index; i++) cur = cur->next;//�������� �� ����
		temp = cur->next;
		cur->next = cur->next->next;
		delete temp;
	}

