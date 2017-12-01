#include <time.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int n, i;
	char y = 'n';
	while (y != 'y' && y != 'Y')
	{
		cout << "Program na liczby pierwsze " << endl;
		cout << "podaj liczbe" << endl;
		cin >> i;
		if (i>2)
		{
			for (int c = 2; c <= i; c++)
			{
				for (int b = 2; b<c; b++)
				{
					if (b == c - 1)
					{
						cout << c << " :jest liczba pierwsza" << endl;
					}
					if ((c%b == 0))
					{


						break;
					}
				}

			}
		}
	cout << "Jesli chcesz zakonczyc program wcisnij y lub Y" << endl;
	cin >> y;
}
cout << "Aby wyjsc prosze wcisnac enter" << endl;
_getch();
return EXIT_SUCCESS;

}
