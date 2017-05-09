#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	cout << "Count UP to 10" << endl;
	cout << "--------------" << endl;
	countUP(10);
	cout << endl;
	system("pause");
	cout << endl;

	cout << "Counter of Trues" << endl;
	cout << "----------------" << endl;
	bool nana[10] = { 0,1,1,0,0,1,0,1,0,1 };
	cout << numTrues(nana, 10, 0) << endl;
	system("pause");
	cout << endl;

	cout << "Serch a number" << endl;
	cout << "----------------" << endl;
	int nuko[10] = { 20,50,3,-56,25,4,52,655,87,1};
	if (serchRec(nuko, 10, 0, 3) == true){cout << "I've founded the number" << endl;}
	else{cout << "error" << endl;}
	system("pause");
	cout << endl;

	cout << "Sum of numbers" << endl;
	cout << "----------------" << endl;
	int niko[10] = { 1,2,3,4,5,6,7,8,9,10};
	cout << sumElemsRec(niko, 10, 0)<<endl;
	system("pause");
	cout << endl;

	cout << "Fibonacci" << endl;
	cout << "----------------" << endl;
	cout << "first number of the fibonacci secuence: " << fibonacci(0) << endl;
	cout << "second number of the fibonacci secuence: " << fibonacci(1) << endl;
	cout << "8th number of the fibonacci secuence: " << fibonacci(16) << endl;
	cout << endl;
	system("pause");

	cout << "Factorial" << endl;
	cout << "----------------" << endl;
	cout << "5! = " << factorial(5)<<endl;
	system("pause");
	cout << endl;

}