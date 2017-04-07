#include "Piece.h"



Piece::Piece(bool color, char posc,int posr)
{
	isWhite = color;
	column = posc;
	row = posr;
}

Piece::~Piece()
{
}

void Piece::setPosition(int row, char _pos)
{
	this->row = row;
	column=_pos;
}

char Piece::getCol()const
{
	return column;
}
int Piece::getRow()const
{
	return row;
}
bool Piece::_isWhite()const
{
	return isWhite;
}