#include "Pokemon_Electric.h"
#include <iostream>



Pokemon_Electric::Pokemon_Electric(const char* pName)
	:Pokemon(pName)
{
	delete[]_type;
	_type = new char[9];
	sprintf(_type, "Electric");
}


Pokemon_Electric::~Pokemon_Electric()
{
}

float Pokemon_Electric::damageAttack(Pokemon* pPok)
{
	if (strcmp(pPok->getType(), "Grass") == 0)
	{
		return 0.5f;
	}
	else if (strcmp(pPok->getType(), "Fire") == 0)
	{
		return 1.0f;
	}
	else if (strcmp(pPok->getType(), "Water") == 0)
	{
		return 2.0f;
	}
	else
	{
		return 0.0f;
	}
}
