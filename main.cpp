#include <stdio.h>

int Recursive(int n,int m)
{
	m--;
	if (m <= 0)
	{
		return(n);
	}

	return (n + Recursive(n * 2 - 50,m));

}

int main()
{
	int v = 0;
	int m = 5;
	int n = 100;
	int b = 1072;

	v = m * b;

	int result;

	result = Recursive(n,m);

	printf("%d時間分の再帰的な賃金体系 = %d\n", m, result);
	printf("%d時間分の一般的な賃金体系 = %d\n", m,v);

	return 0;
}