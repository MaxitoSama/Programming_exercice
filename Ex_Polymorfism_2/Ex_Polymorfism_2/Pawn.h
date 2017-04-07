#include "Piece.h"

class Pawn: public Piece
{
public:
	Pawn(bool color, char posc, int posr);
	~Pawn();

	virtual bool checkPostion(int row, char col);
};

