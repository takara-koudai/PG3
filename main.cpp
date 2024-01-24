#include <stdio.h>
#include <list>
#include <iostream>
#include <algorithm>
#include <vector>
#include <thread>

using namespace std;

void Add(int num) 
{
	num += 1;

	printf("thread %d\n", num);
};

void Add2(int num) 
{
	num += 2;

	printf("thread %d\n", num);
};

void Add3(int num) 
{
	num += 3;

	printf("thread %d\n", num);
};


int main()
{
	int num = 0;

	std::thread th1(Add, num);
	th1.join();


	std::thread th2(Add2, num);
	th2.join();


	std::thread th3(Add3, num);
	th3.join();

	return 0;
}