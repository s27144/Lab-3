#include <iostream>
using namespace std;
int liczba;

int printNumbers(int max) {
	int count = 0;
	for (int i = 5; i < max; i += 5) {
		if (i % 3 != 0) {
			cout << i << endl;
			count++;
		}
	}
	return count;
}
int main() {
	cout << "Podaj liczbe n: ";
	cin >> liczba;
	int count = printNumbers(liczba);
	cout << endl << "Ilosc liczb mniejszych od n, podzielnych przez 5 i niepodzielnych przez 3 to: " << count << endl;
	return 0;
}