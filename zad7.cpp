#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	int a, b, a1, b1,nww;
	cout << "Program wieleokrotnosci " << endl;
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
		if (a==0||b==0)
		{
			nww = 0;
			cout << "Najmniejsza wspolna wielokrotnosc: "<< nww;
			_getch();
			return EXIT_SUCCESS;
		}

		a1 = a;
		b1 = b;
		while (a1 != b1)
		{
			if (a1 > b1)
			{
				b1 = b1 + b;
			}
			else
			{
				a1 = a1 + a;
			}
		}
		nww = a1;
		cout << "Najmniejsza wspolna wielokrotnosc: " << nww;
	_getch();
	return EXIT_SUCCESS;
}