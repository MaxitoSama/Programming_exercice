#pragma once
class Piece
{
public:
	Piece(bool color, char posc, int posr);
	virtual ~Piece();

	void setPosition(int row, char pos);
	char getCol() const;
	int getRow() const;
	bool _isWhite() const;
	virtual bool checkPostion(int row, char col) = 0;

protected:
	int row;
	char column;
	bool isWhite;

};

