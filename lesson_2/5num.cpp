#include <iostream>

using namespace std;

int main()

{
	setlocale(LC_ALL, "");

	int a = 1;

	while (a / 100000 != 0 || a / 10000 == 0)
	{
		cout << "Please enter a 5 digit number: ";
		cin >> a;
	}

	a = a < 0 ? -a : a;
	
	int i = 0;
	int j = 100000;

	while (i < 5)
	{	
		int b = a - (a / j) * j;
		b /= j / 10;

		cout << b << endl;
		
		j /= 10;
		i++;
	}

	system("pause");
}
