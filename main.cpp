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
	int m = 5;
	int n = 100;

	int result;

	result = Recursive(n,m);

	printf("%dŽžŠÔ•ª‚ÌŽž‹‹ = %d\n", m, result);
	

	return 0;
}