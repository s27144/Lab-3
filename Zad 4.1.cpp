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
		int i=0,x,hold;
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

		// wybieranie najwiekszej liczby w tablicy
		for (x = 1; x < size; ++x) {
			if (table[0] < table[x])
				table[0] = table[x];
		}

		cout << endl << "Najwiekszy element to: " << table[0] << endl;
		system("pause");
		return 0;



}
