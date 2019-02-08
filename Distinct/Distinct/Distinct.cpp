// "Distinct.cpp": Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"

#include <iostream>;

using namespace std;

int main()
{
	// Deklaration von Variablen
	int Laenge = 0;
	int* Array = {};

	cout << "Bitte geben Sie die Laenge des Arrays: ";
	cin >> Laenge;

	cout << endl;

	Array = new int[Laenge];

	for (int i = 0; i < Laenge; i++)
	{
		cout << "Wert Nr. " << i + 1 << ": ";
		cin >> Array[i];
	}

	// Entfernen aller Dopplungen und Auffüllen mit Nullen
	for (int i = 0; i < Laenge; i++)
	{
		for (int j = i + 1; j < Laenge; j++)
		{
			if (Array[i] == Array[j] && Array[i] > 0)
			{
				for (int k = j + 1; k < Laenge; k++)
					Array[k - 1] = Array[k];

				Array[Laenge - 1] = 0;
				j = i + 1;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < Laenge; i++)
		cout << "Wert Nr. " << i + 1 << ": " << Array[i] << endl;

	system("PAUSE");

	return 0;
}