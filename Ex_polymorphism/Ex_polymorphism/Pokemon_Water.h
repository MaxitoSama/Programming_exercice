#include "Pokemon.h"
#include <iostream>

class Pokemon_Water :public Pokemon
{
public:
	Pokemon_Water(const char* pName);
	~Pokemon_Water();
	float damageAttack(Pokemon* pPok);
};

