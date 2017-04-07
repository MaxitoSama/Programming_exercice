#include "Piece.h"

class Bishop:public Piece
{
public:
	Bishop(bool color, char posc, int posr);
	~Bishop();

	virtual bool checkPostion(int row, char col);
};

