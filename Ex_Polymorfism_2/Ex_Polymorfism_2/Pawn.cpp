#include "Pawn.h"

Pawn::Pawn(bool color, char posc, int posr)
	:Piece(color,posc,posr)
{
}

Pawn::~Pawn()
{
}

bool Pawn::checkPostion(int pRow, char pCol)
{
	if (isWhite && (row + 1) == pRow && column==pCol &&
		pRow <= 8 && pRow >= 1 && pCol <= 'h' && pCol >= 'a')
		return true;
	if (isWhite == false && (row - 1) == pRow && column == pCol &&
		pRow <= 8 && pRow >= 1 && pCol <= 'h' && pCol >= 'a')
		return true;
	
	return false;
}