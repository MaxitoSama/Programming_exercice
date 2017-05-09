#include <iostream>

using namespace std;

void countUP(int val)
{
	if (val >= 0)
	{
		countUP(val - 1);
		cout << val<<",";
	}
}

int numTrues(bool vec[], int sizeVec, unsigned int index)
{
	int counter=0;
	if (index < sizeVec)
	{
		counter=counter+numTrues(vec,sizeVec,index+1);
		if (vec[index] == true)
		{
			counter++;
		}
	}
	return counter;
}

bool serchRec(int vec[], int sizeVec, unsigned int index, int val)
{
	bool potato=false;

	if (index < sizeVec)
	{
		potato=serchRec(vec, sizeVec, index + 1,val);

		if (vec[index] == val)
		{
			potato = true;
		}
	}
	return potato;
}

int sumElemsRec(int vec[], int sizeVec, unsigned int index)
{
	int sum = 0;

	if (index <=sizeVec-1)
	{
		sum = sum + sumElemsRec(vec, sizeVec, index + 1);
		return sum+vec[index];
	}
	return sum;
}

int fibonacci(int a)
{
	int fib = 0;
	if (a == 0)
		return 1;
	else if (a == 1)
		return 1;
	else
		return fibonacci(a-1)+fibonacci(a-2);
}

int factorial(int num)
{
	if (num == 0)
		return 1;
	else if (num == 1)
		return 1;
	else
		return num*factorial(num - 1);
}