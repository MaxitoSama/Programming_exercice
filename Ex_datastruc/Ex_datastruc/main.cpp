#include <iostream>
#include "Stack.h"

int main()
{
	Stack <int>pila(10);

	cout << "Pushing 3" << endl;
	pila.push(3);
	pila.print();
	cout << "you have " << pila.size() << " in the stack"<<endl;
	cout << "Pushing 5" << endl;
	pila.push(5);
	pila.print();
	cout << "you have " << pila.size() << " in the stack" << endl;
	cout << "Pushing 8" << endl;
	pila.push(8);
	pila.print();
	cout << "you have " << pila.size() << " in the stack" << endl;
	cout << "Poping 8" << endl;
	pila.pop();
	pila.print();
	cout << "you have " << pila.size() << " in the stack" << endl;
	cout << "Poping 5" << endl;
	pila.pop();
	pila.print();
	cout << "you have " << pila.size() << " in the stack" << endl;
	cout << "Poping 3" << endl;
	pila.pop();
	pila.print();

	system("pause");
}