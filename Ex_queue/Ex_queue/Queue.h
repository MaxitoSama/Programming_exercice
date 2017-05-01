#include  <iostream>

using namespace std;

template<class Type>
class Queue
{
public:
	Queue(int maxElems)
	{
		this->maxElems = maxElems;
		idEndElem = -1;
		queueElms = (Type*)malloc(sizeof(Type)*maxElems);
	}
	~Queue() {}

	void enqueue(const Type& elem) {
		idEndElem++;
		queueElms[idEndElem] = elem;
	}
	void dequeue() 
	{
		if (empty() == false)
		{
			queueElms[0] = 0;
			idEndElem--;
			for (int i = 0; i <= idEndElem ; i++)
			{
				queueElms[i] = queueElms[i + 1];
			}
		}
		else
		{
			cout << "You cant remove more elements the queue is empty" << endl;
		}
	}

	bool empty()const {
		if (idEndElem == -1)
		{
			return true;
		}
		else
			return false;
	}
	int size() const 
	{
		return idEndElem + 1;
	}

	void print()const {
		if (idEndElem != -1)
		{
			for (int i = idEndElem; i >= 0; i--)
			{
				cout << queueElms[i] << " | ";
			}
			cout << endl;
		}
		else
		{
			cout << "the queue is empty" << endl;
		}
	
	}

private:
	Type* queueElms;
	int maxElems;
	int idEndElem;
};

