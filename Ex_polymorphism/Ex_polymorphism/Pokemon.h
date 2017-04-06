#pragma once
class Pokemon
{
public:

	Pokemon(const char* pName);
	~Pokemon();

	const char* getName()const;
	const char* getType()const;
	virtual float damageAttack(Pokemon* pPok) = 0;
protected:

	char* _name;
	char* _type;
};

