#include <stdio.h>
#include <iostream>
#include <vector>
#include <thread>

using namespace std;

int main()
{

	const int Text = 100000;
	string TextA(Text, 'a');
	cout << Text << "�����R�s�[�ƈړ����r\n";

	chrono::steady_clock::time_point now;
	chrono::steady_clock::time_point end;

	//�R�s�[
	now = chrono::steady_clock::now();
	string CopyTextA = TextA;
	end = chrono::steady_clock::now();

	int copyResult = chrono::duration_cast<chrono::microseconds>(end - now).count();

	cout << "�R�s�[�̏ꍇ" << "\n";
	cout << copyResult << "\n";

	//move
	now = chrono::steady_clock::now();
	string MoveTextA = move(TextA);
	end = chrono::steady_clock::now();

	int MoveResult = chrono::duration_cast<chrono::microseconds>(end - now).count();

	cout << "�ړ��̏ꍇ" << "\n";
	cout << MoveResult << "\n";


	return 0;
}