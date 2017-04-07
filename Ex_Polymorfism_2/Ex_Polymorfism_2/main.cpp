#include <iostream>
#include "Pawn.h"
#include "Bishop.h"
using namespace std;

int main()
{
	Bishop* p = new Bishop(true,'a',2);
	Piece* piec = p;

	if (piec->checkPostion(1,'b'))
		cout << "Valid" << endl;
	else
		cout << "No Valid" << endl;

	delete p;
	system("pause");
}