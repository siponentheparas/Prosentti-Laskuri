#include <iostream>

#include "calculations.h"

int main()
{
	setlocale(LC_ALL, "finnish");

	while (true)
	{
		cout << "Laskuri by siponen\n"
			 << endl;
		cout << "[0] Poistu" << endl;
		cout << "[1] Kuinka monta prosenttia" << endl;
		cout << "[2] Muutos" << endl;
		cout << "[3] Vertailu" << endl;
		cout << "[4] Prosenttiarvo" << endl;
		cout << "Tila: ";
		char mode;
		cin >> mode;
		if (mode == '0')
		{
			system("clear");
			break;
		}
		else if (mode == '1')
		{
			system("clear");
			percentage();
		}
		else if (mode == '2')
		{
			system("clear");
			change();
		}
		else if (mode == '3')
		{
			system("clear");
			compare();
		}
		else if (mode == '4')
		{
			system("clear");
		}
		else
		{
			system("clear");
		}
	}

	return 0;
}