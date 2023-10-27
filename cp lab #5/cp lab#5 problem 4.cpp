#include<iostream>
using namespace std;
int main()
{
	int first_number, second_number;
	float Answer;
	char op;
	string choice;

		do
		{
			cout << "Enter first number,operator,second number:";
			cin >> first_number>> op>> second_number;
			switch (op)
			{
			case'+':
				Answer = first_number + second_number;
				cout << "Answer" <<  "=" << first_number << "" << op << "" << second_number << "=" << first_number + second_number << endl;
				break;
			case'-':
				Answer = first_number - second_number;
				cout << "Answer" <<"=" << first_number << "" << op << "" << second_number << "=" << first_number - second_number << endl;
				break;
			case'*':
				Answer = first_number * second_number;
				cout << "Answer" <<"=" << first_number << "" << op << "" << second_number << "=" << first_number * second_number << endl;
				break;
			case'/':
				Answer = first_number / second_number;
				cout << "Answer" <<"=" << first_number << "" << op << "" << second_number << "=" << first_number / second_number << endl;
				break;
				
			}
			cout << "Do another (y/n)=";
			cin >> choice;
		} while (choice == "Y" || choice == "y" );
		
		return 0;
}