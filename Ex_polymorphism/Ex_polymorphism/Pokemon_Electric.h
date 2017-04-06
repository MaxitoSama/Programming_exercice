#include "Pokemon.h"
#include <iostream>

class Pokemon_Electric:public Pokemon
{
public:
	Pokemon_Electric(const char* pName);
	~Pokemon_Electric();
	float damageAttack(Pokemon* pPok);
};

