#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	
	list<const char*> list_
	{
		"����","�_�c","�H�t��","��k��",
		"��J","���闢","�c�[","�",
		"����","���","�r��","�ڔ�",
		"���c�n��","�V��v��","�V�h","��X��",
		"���h","�a�J","�b���","�ڍ�",
		"�ܔ��c","���","�i��","�c��",
		"�l����","�V��","�L�y��"
	};
	
	printf("���a6�N�̘H���}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	printf("\n");

	printf("���a47�N�̘H���}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		if (*it_f == "�c�[")
		{
			it_f = list_.insert(it_f, "�����闢");

			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	printf("\n");

	printf("�ߘa5�N�̘H���}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end();++it_f)
	{
		if (*it_f == "�c��")
		{
			it_f = list_.insert(it_f, "���փQ�[�g�E�F�C");

			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	return 0;
}