#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*);

//コールバック関数
void DispResult(int* s)
{
	printf("%d秒待つ\n", *s);
}

void setTimeout(PFunc p, int &second)
{
	p(&second);
	Sleep(second * 1000);
}

int main()
{
	srand((unsigned int)time(NULL));
	
	int n = 0;
	int m = 3;
	int dice;
	dice = rand() % 6 + 1;

	PFunc p;
	p = DispResult;

	printf("0か1を入力してください\n");
	scanf_s("%d",&n);

	if (n == 0)
	{
		if (dice % 2 == 0)
		{
			setTimeout(p, m);

			printf("正解\n");

		}
		else
		{
			setTimeout(p, m);

			printf("不正解\n");
			
		}
	}
	else
	{
		if (dice % 2 == 1)
		{
			setTimeout(p, m);

			printf("正解\n");
		}
		else
		{
			setTimeout(p, m);

			printf("不正解\n");

		}
	}

	printf("正解は %d でした", dice);

	return 0;
}