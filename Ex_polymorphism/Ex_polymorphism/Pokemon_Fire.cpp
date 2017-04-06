#include "Pokemon_Fire.h"
#include <iostream>



Pokemon_Fire::Pokemon_Fire(const char* pName)
	:Pokemon(pName)
{
	delete[]_type;
	_type = new char[5];
	sprintf(_type, "Fire");
}


Pokemon_Fire::~Pokemon_Fire()
{
}

float Pokemon_Fire::damageAttack(Pokemon* pPok)
{
	if (strcmp(pPok->getType(), "Grass") == 0)
	{
		return 2.0f;
	}
	else if (strcmp(pPok->getType(), "Electric") == 0)
	{
		return 1.0f;
	}
	else if (strcmp(pPok->getType(), "Water") == 0)
	{
		return 0.5;
	}
	else
	{
		return 0.0f;
	}
}
