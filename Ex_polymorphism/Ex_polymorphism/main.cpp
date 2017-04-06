#include <iostream>
#include "Pokemon_Electric.h"
#include "Pokemon_Water.h"
using namespace std;

int main()
{
	Pokemon* el=new Pokemon_Electric("Pikachu");
	Pokemon* el2=new Pokemon_Water("Wartortle");

	cout << el->getName() << endl;
	cout << el->getType() << endl;

	cout << el2->getName() << endl;
	cout << el2->getType() << endl;

	cout << el->damageAttack(el2) << endl;

	system("pause");
	return 0;
}