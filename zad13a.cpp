#include <iostream>
#include <conio.h>
using namespace std;


int main() {

	int k, ksilnia, n, nsilnia, m,nawiassilnia, nawias,i,x,z;
	char y = 'n';

	while (y != 'y' && y != 'Y')
	{
	cout << "Podaj n: " << endl;
	cin >> n;
	cout << "Podaj k: " << endl;
	cin >> k;
	ksilnia = 1;
	nsilnia = 1;
	nawiassilnia = 1;
	for (i=1 ; i = k; i++)
	{
		ksilnia = ksilnia * i;
	}
	for (x=1; x = k; x++)
	{
		nsilnia = nsilnia * n;
	}
	cout<< nsilnia<< endl;
	nawias = n - k;
	for (z = 1; z = nawias; z++)
	{
		nawiassilnia = nawiassilnia * nawias;
	}
	m = (nsilnia) / (ksilnia*nawiassilnia);

	cout << "m = " << m << endl;
	
	cout << "Jesli chcesz zakonczyc program wcisnij y lub Y" << endl;
	cin >> y;
	}
	cout << "Aby wyjsc prosze wcisnac enter" << endl;

	_getch();
	return EXIT_SUCCESS;
}
