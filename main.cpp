#include <stdio.h>
#include "Enemy.h"

int main()
{

	Enemy enemy;

	bool GameLoop = true;
	
	int i = 0;

	while (i < 3)
	{
		enemy.Update();
		i++;
	}

	//GameLoop = enemy.isGameLoop();
	//enemy.Update();
	//enemy.Update();
	//enemy.Update();

	return 0;
}