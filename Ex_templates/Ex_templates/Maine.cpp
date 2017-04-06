#include <iostream>
using namespace std;

template<typename T>
class Jugador {
public:
	Jugador() { lives = 0; }
	~Jugador() {}

	T getLives() { return lives; }
private:
	T lives;
};

template<typename T>
void swap(T* val1, T* val2)
{
	T auxVal = *val1;
	*val1 = *val2;
	*val2 = auxVal;
}

int main()
{
	Jugador<int>pj;

	cout << pj.getLives() << endl;

	int a = 1;
	int b = 2;
	swap<int>(&a, &b);

	cout << a << endl;
	cout << b << endl;

	system("pause");
}