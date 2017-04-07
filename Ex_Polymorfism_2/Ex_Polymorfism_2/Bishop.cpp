#include "Bishop.h"
#include "math.h"

Bishop::Bishop(bool color, char posc, int posr)
	:Piece(color, posc, posr)
{
}

Bishop::~Bishop()
{
}

bool Bishop::checkPostion(int pRow, char pCol)
{
	int val1 = abs(row - pRow);
	int val2 = abs((int)column - (int)pCol);
	if (pRow <= 8 && pRow >= 1 && pCol <= 'h' && pCol >= 'a'
		&& val1 == val2)
		return true;
	return false;
}