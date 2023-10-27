#include<iostream>
using namespace std;
int main()
{
	int i = 1,j;
	do {
		j= i;
		cout << j << " ";
		i = i * 2;
	} while (j <512);
	return 0;
}