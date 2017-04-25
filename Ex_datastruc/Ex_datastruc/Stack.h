#include <iostream>

using namespace std;

template <class Type>
class Stack
{
public:
	Stack(int maxElems)
	{
		this->maxElems = maxElems;
		idTopElem = -1;
		stackElems = (Type*)malloc(maxElems);
	}
	~Stack() {}
	void push(const Type& item)
	{
		idTopElem++;
		stackElems[idTopElem] = item;
	}
	void pop() 
	{
		stackElems[idTopElem] = NULL;
		idTopElem--;
	}
	Type top() const 
	{
		return stackElems[idTopElem];
	}

	bool empty() const
	{
		if (idTopElem < 0)
			return true;
		else
			return false;
	}
	int size() const
	{
		return idTopElem + 1;
	}

	void print() const
	{
		if (empty() == true)
		{
			cout << "The stack is empty" << endl;
		}
		else
		{
			cout << stackElems[idTopElem] << endl;
		}
	}

private:
	Type* stackElems;
	int maxElems;
	int idTopElem;
};

