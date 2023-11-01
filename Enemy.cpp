#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::FuncTable[])()
{
	&Enemy::Approach,
	& Enemy::Fire,
	& Enemy::Leave
};

void Enemy::Update()
{
	(this->*FuncTable[(int)phase_])();
}

void Enemy::Approach()
{
	printf("Ú‹ß\n");

	phase_ = Phase::kFire;
}

void Enemy::Fire()
{
	printf("UŒ‚\n");

	phase_ = Phase::kLeave;
}

void Enemy::Leave()
{
	printf("—£’E\n");
}
