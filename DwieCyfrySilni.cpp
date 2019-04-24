#include <iostream>
using namespace std;

int main()
{
	int amount = 0;
	cin >> amount;
	int factorialNumber;
	for (unsigned int i = 0; i < amount; i++)
	{
		cin >> factorialNumber;
		int factorial = 1;
		if (factorialNumber < 10) 
		{ 
			for (unsigned int j = 2; j <= factorialNumber; j++)
			{
				factorial = factorial * j;
			}
			
			int onesDigits = factorial % 10;
			int unitsDigits = (factorial / 10) % 10;
			cout << unitsDigits << " " << onesDigits << endl;
		}
		else
		{
			cout << 0 << " " << 0 << endl;
		}
	}
	return 0;
}
