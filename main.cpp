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
	scanf_s("%d",&n);

	if (n == 0)
	{
		if (dice % 2 == 0)
		{
			setTimeout(p, time);

			printf("����\n");

		}
		else
		{
			//setTimeout(p, time);

			printf("�s����\n");
			
		}
	}
	else
	{
		if (dice % 2 == 1)
		{
			//setTimeout(p, time);

			printf("����\n");
		}
		else
		{
			//setTimeout(p, time);

			printf("�s����\n");

		}
	}

	printf("������ %d �ł���", dice);

	return 0;
}