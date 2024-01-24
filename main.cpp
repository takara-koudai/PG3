#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main()
{
	
	list<const char*> list_
	{
		"“Œ‹","_“c","H—tŒ´","Œä“k’¬",
		"éò’J","“ú•é—¢","“c’[","‹î",
		"‘ƒŠ›","‘å’Ë","’r‘Ü","–Ú”’",
		"‚“c”nê","V‘å‹v•Û","Vh","‘ãX–Ø",
		"Œ´h","a’J","Œb”äõ","–Ú•",
		"ŒÜ”½“c","‘åè","•iì","“c’¬",
		"•l¼’¬","V‹´","—LŠy’¬"
	};
	
	printf("º˜a6”N‚Ì˜Hü}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	printf("\n");

	printf("º˜a47”N‚Ì˜Hü}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		if (*it_f == "“c’[")
		{
			it_f = list_.insert(it_f, "¼“ú•é—¢");

			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	printf("\n");

	printf("—ß˜a5”N‚Ì˜Hü}\n");

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end();++it_f)
	{
		if (*it_f == "“c’¬")
		{
			it_f = list_.insert(it_f, "‚—ÖƒQ[ƒgƒEƒFƒC");

			++it_f;
		}
	}

	for (list<const char*>::iterator it_f = list_.begin(); it_f != list_.end(); ++it_f)
	{
		cout << *it_f << endl;
	}

	return 0;
}