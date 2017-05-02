#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue<int> Q(10);
	Queue<char> P(100);

	P.enqueue('c');
	Q.print();
	Q.enqueue('c');
	Q.print();
	Q.enqueue('c');
	Q.print();
	Q.dequeue();
	Q.print();
	Q.dequeue();
	Q.print();
	Q.enqueue('c');
	Q.print();
	Q.dequeue();
	Q.print();
	Q.dequeue();
	Q.print();


	system("pause");
}