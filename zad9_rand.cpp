#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int p, w1, q;
	char y = 'n';
	while (y != 'y' && y != 'Y')
	{
		system("cls");
		w1 = 0;
		srand((unsigned)time(NULL));
		cout << "Automatyczny rzut koscia " << endl;
		p = (double)rand() / (RAND_MAX) * 6 + 1;
		cout << "Wynik pierwszej kosci = " << p << endl;
		q = (double)rand() / (RAND_MAX) * 6 + 1;
		cout << "Wynik drugiej kosci = " << q << endl;

		if (p % 2 == 0)
		{

			switch (q)
			{
			case (2):
				w1 = p + 3 * q;
				break;
			case (4):
				w1 = p + 3 * q;
				break;
			case (5):
				w1 = p + 3 * q;
				break;
			default:
				w1 = 2 * q;
				break;
			}
		}
		else
		{
			switch (q)
			{
			case (1):
				if (p == q) {
					w1 = 5 * p + 3;
				}
				else
				{
					w1 = 2 * p + q;
				}
				break;
			case (3):
				if (p == q) {
					w1 = 5 * p + 3;
				}
				else
				{
					w1 = 2 * p + q;
				}
				break;
			case (6):
				if (p == q) {
					w1 = 5 * p + 3;
				}
				else
				{
					w1 = 2 * p + q;
				}
				break;
			default:
				w1 = min(p, q) + 4;
				break;
			}
			if (p == 5 && q == 5) {
				w1 = w1 + 5;
			}

		}
		cout << "Twoja punktacja to: " << w1 << endl;
		cout << "Jesli chcesz zakonczyc program wcisnij y lub Y" << endl;
		cin >> y;
	}
	_getch();
	return EXIT_SUCCESS;
}