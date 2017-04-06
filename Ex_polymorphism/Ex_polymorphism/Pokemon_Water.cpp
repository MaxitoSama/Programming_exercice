#include "Pokemon_Water.h"
#include <iostream>



Pokemon_Water::Pokemon_Water(const char* pName)
	:Pokemon(pName)
{
	delete[]_type;
	_type = new char[9];
	sprintf(_type, "Water");
}


Pokemon_Water::~Pokemon_Water()
{
}

float Pokemon_Water::damageAttack(Pokemon* pPok)
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
		return 0.5f;
	}
	else
	{
		return 1.0f;
	}
}
