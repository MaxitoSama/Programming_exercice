#include <iostream>
#include "Pokemon_Electric.h"
#include "Pokemon_Water.h"
#include "Pokemon_Fire.h"
using namespace std;

int main()
{
	Pokemon* el=new Pokemon_Electric("Pikachu");
	Pokemon* el2=new Pokemon_Water("Wartortle");
	Pokemon* el3 = new Pokemon_Fire("Charizard");

	cout << el->getName() << endl;
	cout << el2->getType() << endl;

	cout << el2->getName() << endl;
	cout << el2->getType() << endl;

	cout << el3->getName() << endl;
	cout << el3->getType() << endl;

	cout << el->damageAttack(el2) << endl;

	system("pause");
	return 0;
}