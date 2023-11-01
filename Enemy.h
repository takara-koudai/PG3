#pragma once

class Enemy
{
public:

	void Update();

private:

	enum class Phase
	{
		kApproach,
		kFire,
		kLeave
	};

	//�ڋ�
	void Approach();
	//�U��
	void Fire();
	//���E
	void Leave();

	//�����o�ϐ�
	Phase phase_ = Phase::kApproach;

	static void (Enemy::* FuncTable[])();

};



