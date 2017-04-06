#include "Pokemon.h"
#include <iostream>

class Pokemon_Fire :public Pokemon
{
public:
	Pokemon_Fire(const char* pName);
	~Pokemon_Fire();
	float damageAttack(Pokemon* pPok);
};

