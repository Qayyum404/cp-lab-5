#include<iostream>
using namespace std;
int main()
{
	int number,remainder,digit=0;
	cout << "Enter your decimal number:";
	cin >> number;
	int i = 1;
	do
	{
		remainder = number % 8;
		digit = digit + (remainder * i);
		number = number / 8;
		i = i * 10;
		
	} while (number != 0);
	cout << digit;
	return 0;
}