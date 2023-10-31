#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include<functional>

//typedef void (*PFunc)(int*);
//
////コールバック関数
//void DispResult(int* s)
//{
//	printf("%d秒待つ\n", *s);
//}

void setTimeout(std::function<void(int*)> p, int &second)
{
	p(&second);
	Sleep(second * 1000);
}

int main()
{
	//
	std::function<void(int*)> fx = [](int* s) {printf("%d秒待つ\n", *s); };

	srand((unsigned int)time(NULL));
	
	int data = 0;
	int time = 3;
	int dice;
	dice = rand() % 6 + 1;

	//PFunc p;
	//p = DispResult;

	printf("0か1を入力してください\n");
	scanf_s("%d",&data);

	setTimeout(fx, time);

	if (data == dice % 2)
	{
		printf("正解\n");
	}
	else
	{
		printf("不正解\n");
	}

	printf("正解は %d でした", dice);

	return 0;
}