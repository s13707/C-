#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int a, b, a1, b1, nwp;
	cout << "Program najwyzszy wspolny dzielnik" << endl;
	cout << "Podaj pierwsza liczbe dodatnia: ";
	cin >> a;
	cout << endl;
	cout << "Podaj druga liczbe dodatnia:";
	cin >> b;
	cout << endl;

	while (cin.fail() || (a && b < 0)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Jedna z podanych liczb jest ujemna, prosze podaæ je ponownie =." << endl;
		cout << "Podaj pierwsz¹ liczbê dodatni¹:" << endl;
		cin >> a;
		cout << "Podaj druga liczbe dodatnia:";
		cin >> b;
	}
	if (a < 0 || b < 0)
	{
		cout << "Brak rozwiazan";
		_getch();
		return EXIT_SUCCESS;
	}

	a1 = a;
	b1 = b;
	while (a1 != b1)
	{
		if (a1 > b1)
		{
			a1 = a1 - b1;
		}
		else
		{
			b1 = b1 - a1;
		}
	}
	nwp = a1;
	cout << "Najwyzszy wspolny dzielnik: " << nwp;
	_getch();
	return EXIT_SUCCESS;
}