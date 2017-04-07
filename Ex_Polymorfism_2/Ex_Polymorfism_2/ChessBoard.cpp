#include "ChessBoard.h"
#include "Pawn.h"
#include "Bishop.h"



ChessBoard::ChessBoard()
{
	//White Pawns
	for (int i = 0; i < 8; i++)
	{
		_pieces[i]=new Pawn(2, ((char)i) + 'a', true);
	}

	//Black Pawns
	for (int i = 8; i < 16; i++)
	{
		_pieces[i] = new Pawn(2, ((char)i) + 'a', false);
	}

	//White Bishop
	_pieces[16] = new Bishop(1, 'c', true);
	_pieces[17] = new Bishop(1, 'f', true);

	//Black Bishop
	_pieces[18] = new Bishop(8, 'c', true);
	_pieces[19] = new Bishop(8, 'f', true);
}


ChessBoard::~ChessBoard()
{
}

void ChessBoard::movePiece(bool pWhite, int pRow, char pColumn,
	int pNewRow, char pNewColumn)
{
	for (int i = 0; i < 20; i++)
	{
		if (_pieces[i]->_isWhite() == pWhite &&
			_pieces[i]->getRow() == pRow &&
			_pieces[i]->getCol() == pColumn)
		{
			if (_pieces[i]->checkPostion(pNewRow, pNewColumn))
			{
				_pieces[i]->setPosition(pNewRow, pNewColumn);
			}
			break;
		}
	}
}