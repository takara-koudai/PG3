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
	printf("�ڋ�\n");

	phase_ = Phase::kFire;
}

void Enemy::Fire()
{
	printf("�U��\n");

	phase_ = Phase::kLeave;
}

void Enemy::Leave()
{
	printf("���E\n");
}
