#include "Ambulance.h"

Ambulance::Ambulance()
{
	name_ = "�~�}��";
	printf("%s�������Ă���\n", name_);
}

Ambulance::~Ambulance()
{
	printf("%s�͑��苎����\n", name_);
}

void Ambulance::Purr()
{
	printf("%s�̉����Ȃ��Ă���\n", name_);
}
