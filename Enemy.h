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

	//Ú‹ß
	void Approach();
	//UŒ‚
	void Fire();
	//—£’E
	void Leave();

	//ƒƒ“ƒo•Ï”
	Phase phase_ = Phase::kApproach;

	static void (Enemy::* FuncTable[])();

};



