#include<iostream>
using namespace std;
int main()
{
	int value;
	int Factorial = 1;
	cout << "Enter your value:";
	cin >> value;
	do
	{
		Factorial = Factorial * value;
		value--;
	}while (value > 0);
	cout << "Factorial=" << Factorial << endl;
	return 0;
}