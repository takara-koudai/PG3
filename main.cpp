#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	
	list<const char*> list_
	{
		"Tokyo","Kanda","Akihabara","Okachimachi",
		"Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro",
		"Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi",
		"Harajuku","Shibuya","Ebisu","Meguro",
		"Gotanda","Osaki","Sinagawa","Tamachi",
		"Hamamatsucho","Shimbasi","Yurakucho"
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
		if (*it_f == "Tabata")
		{
			it_f = list_.insert(it_f, "Nishi-Nippori");

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
		if (*it_f == "Tamachi")
		{
			it_f = list_.insert(it_f, "Takanawa Gateway");

			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	return 0;
}