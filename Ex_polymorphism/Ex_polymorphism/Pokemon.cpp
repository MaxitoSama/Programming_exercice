#include "Pokemon.h"
#include <iostream>



Pokemon::Pokemon(const char* pName)
{
	_type = new char[7];
	sprintf(_type, "noType");
	int length = strlen(pName);
	_name = new char[length+1];
	for (int i = 0; i < length+1; i++)
	{
		_name[i] = pName[i];
	}
}


Pokemon::~Pokemon()
{
	delete[]_type;
	delete[]_name;
}

 const char* Pokemon::getName()const
{
	 return _name;
}
 const char* Pokemon::getType()const
 {
	 return _type;
}