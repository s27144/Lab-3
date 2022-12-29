#include <iostream>
using namespace std;

struct student {
	string imie;
	int informatyka;
	int matematyka;
	int biologia;
	int polski;
	
};
int wywolywany_student, numer_przedmiotu, liczba_zapytan;
struct student listaStudentow[6];
void tworzenie_struktury() {
	
	for (int i = 0; i < 6; i++) {
		cout << "Student: " << i + 1 << endl;
		cout << "Podaj imie studenta: "; cin >> listaStudentow[i].imie;
		cout << "Podaj ocene z informatyki: "; cin >> listaStudentow[i].informatyka;
		cout << "Podaj ocene z matematyki: "; cin >> listaStudentow[i].matematyka;
		cout << "Podaj ocene z biologi: "; cin >> listaStudentow[i].biologia;
		cout << "Podaj ocene z polskiego: "; cin >> listaStudentow[i].polski;
	}
}

void sprawdzanie_ocen() {
	cout << endl << "By sprawdzic ocene studenta, podaj numer indeksu: ";
	cin >> wywolywany_student;
	wywolywany_student = wywolywany_student - 1;
	cout << "Informatyka (1)" << endl << "Matematyka (2)" << endl << "Biologia (3)" << endl << "Polski (4)" << endl;
	cout << "Podaj numer z jakiego przedmiotu chcesz zobaczyc ocene: ";
	cin >> numer_przedmiotu;
	cout << endl << "Student: " << listaStudentow[wywolywany_student].imie << endl;

	if (numer_przedmiotu == 1) {
		cout << "Ocena z Informatki to: " << listaStudentow[wywolywany_student].informatyka;
	}
	else if (numer_przedmiotu == 2) {
		cout << "Ocena z Matematyki to: " << listaStudentow[wywolywany_student].matematyka;
	}
	else if (numer_przedmiotu == 3) {
		cout << "Ocena z Biologi to: " << listaStudentow[wywolywany_student].biologia;
	}
	else if (numer_przedmiotu == 4) {
		cout << "Ocena z Polskiego to: " << listaStudentow[wywolywany_student].polski;
	}
}

int main() {
	tworzenie_struktury();
	cout << endl << "Podaj liczbe zapytan: "; cin >> liczba_zapytan;
	for (int i = 0; i < liczba_zapytan; i++) {
		sprawdzanie_ocen();
	}
	
	return 0;
}