#include <stdio.h>
#include "Policecar.h"
#include "Ambulance.h"

int main()
{
	printf("�o��\n");
	Car* Cars[2];

	Cars[0] = new Policecar;
	Cars[1] = new Ambulance;

	printf("\n���K\n");

	Cars[0]->Purr();
	Cars[1]->Purr();

	printf("\n�A��\n");
	for (int i = 0; i < 2; i++) 
	{
		delete Cars[i];
	}
	
	return 0;
}