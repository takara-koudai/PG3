#include <stdio.h>

template<typename T>

class Number
{
public:

	T number;
	T number2;

	Number(T number,T number2) : number(number),number2(number2){}

	T Min(T a,T b)
	{
		if (a < b)
		{
			return static_cast<T>(a);
		}
		else
		{
			return static_cast<T>(b);
		}
	}
	
};

int main()
{

	Number<int> b1(1, 4);
	Number<float> b2(2.5f, 5.0f);
	Number<double> b3(2.4f, 3.3f);
	
	printf("%d\n", b1);
	printf("%f\n", b2);
	printf("%f\n", b3);

	
	return 0;
}