#pragma once
#include "Piece.h"

class ChessBoard
{
public:
	ChessBoard();
	~ChessBoard();

	void movePiece(bool pWhite, int pRow, char pColumn,
		int pNewRow, char pNewColumn);
private:
	Piece* _pieces[32];
};

