#include "Policecar.h"

Policecar::Policecar()
{
	name_ = "�p�g�J�[";
	printf("%s�������Ă���\n", name_);
}

Policecar::~Policecar()
{
	printf("%s�͑��苎����\n", name_);
}

void Policecar::Purr()
{
	printf("%s�̉����Ȃ��Ă���\n", name_);
}
