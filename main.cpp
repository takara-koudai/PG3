#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

//�R�[���o�b�N�֐�
void DispResult(int* s)
{
	printf("%d�b�҂�\n", *s);
}

void setTimeout(PFunc p, int &second)
{
	p(&second);
	Sleep(second * 1000);
}

int main()
{
	srand((unsigned int)time(NULL));
	
	int data = 0;
	int time = 3;
	int dice;
	dice = rand() % 6 + 1;

	PFunc p;
	p = DispResult;

	printf("0��1����͂��Ă�������\n");
	scanf_s("%d",&data);

	setTimeout(p, time);

	if (data == 0)
	{
		if (dice % 2 == 0)
		{
			printf("����\n");
		}
		else
		{
			printf("�s����\n");	
		}
	}
	else
	{
		if (dice % 2 == 1)
		{
			printf("����\n");
		}
		else
		{
			printf("�s����\n");
		}
	}

	printf("������ %d �ł���", dice);

	return 0;
}