#include <iostream>
#include <vector>

using namespace std;

int main() {

	int length;
	cout << "Podaj dlugosc tablicy: "; cin >> length; cout << endl;
	while (!cin) {
		cout << "Niepoprawna odpowiedz, sprobuj jeszcze raz!" << endl;
		cin.clear();
		cin.ignore();
		system("pause");
		system("cls");
		cout << "Podaj dlugosc tablicy: "; cin >> length; cout << endl;
	}
	vector<int> table(length); //ustawianie tablicy na dlugosc podana przez uzytkownika
	int i = 0, x, hold;
	int size = table.size();

	//przypisywanie wartosci dla konkretnego miejsca w tablicy
	do {
		cout << "Podaj wartosc dla miejsca " << i << " : ";
		cin >> hold;
		//if sprawdza czy wprowadzony znak to int
		if (!cin) {
			cout << "Niepoprawna format odpowiedzi, sprobuj jeszcze raz!" << endl;
			cin.clear();
			cin.ignore();
			system("pause");
		}
		else {
			table[i] = hold;
			i++;
		}
	} while (i < size);

	// wybieranie najczestszej liczby w tablicy
	int maxcount = 0;
	int max_freq;
	for (int i = 0; i < size; i++) {
		int count = 0;
		for (int j = 0; j < size; j++) {
			if (table[i] == table[j])
				count++;
		}

		if (count > maxcount) {
			maxcount = count;
			max_freq = table[i];
		}
		
	}
	cout << endl;
	cout << "Najczesciej wystepujacy element w tablicy: " << max_freq << endl;


}
