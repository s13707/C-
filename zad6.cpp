#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

	int main() {
	int a, b;
	cout << "Program pokazuj¹cy wszystkie dzielniki podanej liczby przu uzyciu wszystkich petli" << endl;
	cout << "Podaj liczbeê ktorej dzielniki chcesz otrzymac: ";
	cin >> a;
	cout << endl;
	cout << "Petla for:" << endl;
	for (b = 1; b <= a ; b++)
	{
		
		if (a%b == 0)
		{
			cout << b << " ";
		}

	}
	cout << endl;
	cout << "Petla while:" << endl;
	b = 1;
	while (a >= b)
	{
		if (a%b == 0)
		{
			cout << b << " ";
		}
		b++;
	}
	cout << endl;
	cout << "Petla do while:" << endl;
	b = 1;
	do
	{
		if (a%b == 0)
		{
			cout << b << " ";
		}
		b++;
	} while (a >= b);
	_getch();
	return EXIT_SUCCESS;
}