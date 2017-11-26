#include <time.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int godziny, zarobek, nadgodziny, podatek;
	char kategoria;
	char	y = 'n';
	while (y != 'y' && y != 'Y')
	{
		system("cls");
		cout << "Program obliczajacy tygodniowe wynagrodzenie " << endl;
		cout << "Podaj kategorie placowa:" << endl;
		cout << "a - stawka: 15zl/h " << endl;
		cout << "b - stawka: 25zl/h " << endl;
		cout << "c - stawka: 30zl/h " << endl;
		cout << "d - stawka: 35zl/h " << endl;
		cin >> kategoria;
		cout << "Prosze podac ilosc godzin" << endl;
		cin >> godziny;

		if (godziny > 40) {
			nadgodziny = godziny - 40;
			godziny = 40;
		}
		else
		{
			nadgodziny = 0;
		}

		if (godziny <= 40)
		{
			
			switch (kategoria)
			{
			case ('a'):
				zarobek = godziny * 15;
				break;
			case ('b'):
				zarobek = godziny * 25;
				break;
			case ('c'):
				zarobek = godziny * 30;
				break;
			case ('d'):
				zarobek = godziny * 35;
				break;
			default:
				break;
			}
		}

		cout << " Teraz obliczymy nadgodziny" << endl;

		if (nadgodziny > 0)
		{
			switch (kategoria)
			{
			case ('a'):
				zarobek = zarobek + nadgodziny * 30;
				break;
			case ('b'):
				zarobek = zarobek + nadgodziny * 50;
				break;
			case ('c'):
				zarobek = zarobek + nadgodziny * 60;
				break;
			case ('d'):
				zarobek = zarobek + nadgodziny * 70;
				break;
			default:
				break;
			}
		}
		else
		{
			cout << " Dany pracownik nie ma nadgodzin" << endl;
		}
		cout << endl;
		cout << "-----------------------------------" << endl;
		cout << endl;
		cout << "Jeszcze tylko podatek" << endl;

		if (zarobek <= 700)
		{
			podatek = (15 * zarobek) / 100;
		}
		else
		{
			if (700 < zarobek >= 1200)
			{
				podatek = (20 * zarobek) / 100;
			}
			else
			{
				podatek = (25 * zarobek) / 100;
			}
		}
		cout << endl;
		cout << "-----------------------------------" << endl;
		cout << endl;
		cout << "Zarobek ="<< zarobek << endl;
		cout << "Nadgodziny =" << nadgodziny << endl;
		cout << "Podatek dochodowy =" << podatek << endl;
		
		zarobek = zarobek - podatek;
		
		cout << "Zarobek po odjeciu podatku =" << zarobek << endl;
		
		cout << "Jesli chcesz zakonczyc program wcisnij y lub Y" << endl;
		cin >> y;
	}
	cout << "Aby wyjsc proszê wcisnac enter" << endl;
	_getch();
	return EXIT_SUCCESS;
}