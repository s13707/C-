#include <time.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int suma, n, p, p1;
	char	y = 'n';
	while (y != 'y' && y != 'Y')
	{
	cout << "Program na liczbe doskonala" << endl;
	cout << "podaj liczbe" << endl;
	cin >> n;
	suma = 0;

	p = sqrt(n);
	while (p > 1)
	{
		if (n%p == 0)
		{
			suma = suma + p;
			p1 = n / p;
			if (p1 != p)
			{
				suma = suma + p1;
			}
		}
		else
		{
			p = p - 1;
		}
	}
	if (p <= 1)
	{
		suma = suma + 1;
		if (suma == n)
		{
			cout << "Jest to liczba doskonala"<< endl;
		}
		else
		{
			cout << "To nie jest liczba doskonala"<< endl;
		}
	}

	cout << "Jesli chcesz zakonczyc program wcisnij y lub Y" << endl;
	cin >> y;
	}
	cout << "Aby wyjsc prosze wcisnac enter" << endl;
	_getch();
	return EXIT_SUCCESS;

}