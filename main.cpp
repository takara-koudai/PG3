#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include<functional>

//typedef void (*PFunc)(int*);
//
////�R�[���o�b�N�֐�
//void DispResult(int* s)
//{
//	printf("%d�b�҂�\n", *s);
//}

void setTimeout(std::function<void(int*)> p, int &second)
{
	p(&second);
	Sleep(second * 1000);
}

int main()
{
	//
	std::function<void(int*)> fx = [](int* s) {printf("%d�b�҂�\n", *s); };

	srand((unsigned int)time(NULL));
	
	int data = 0;
	int time = 3;
	int dice;
	dice = rand() % 6 + 1;

	//PFunc p;
	//p = DispResult;

	printf("0��1����͂��Ă�������\n");
	scanf_s("%d",&data);

	setTimeout(fx, time);

	if (data == dice % 2)
	{
		printf("����\n");
	}
	else
	{
		printf("�s����\n");
	}

	printf("������ %d �ł���", dice);

	return 0;
}