#include <stdio.h>

template <typename Type>

//関数
Type Min(Type a, Type b)
{
	if (a < b)
	{
		return static_cast<Type>(a);
	}
	else
	{
		return static_cast<Type>(b);
	}
	
}

template<>
char Min<char>(char a, char b)
{
	return printf("数字以外は入力できません\n");
}

int main()
{

	printf("%d\n", Min<int>(100, 120));

	printf("%f\n", Min<float>(130.5f, 150.5f));

	printf("%lf\n", Min<double>(134.0f, 167.0f));
	
	Min<char>('a', 'b');


	return 0;
}