#pragma once

class Enemy
{
public:

	void Update();

	bool isGameLoop() { return GameLoop_; }

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

	bool GameLoop_ = true;

};



