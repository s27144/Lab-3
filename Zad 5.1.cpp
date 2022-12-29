#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <int> wektor;
	int vec_length, i, element;
	cout << "Podaj liczbe elementow wektora: ";
	cin >> vec_length;
	wektor.resize(vec_length);
	for (i = 0; i < vec_length; i++) {
		cout << "Podaj element o indeksie " << i << ": ";
		cin >> element;
		wektor.at(i) = element;
		
	}
	//sorting
	cout << "Przed sortowaniem: ";
	for (auto x : wektor)
		cout << x << " ";
	//cout << "\n" << wektor.size();
	sort(wektor.begin(), wektor.end());
	cout << "\nPo sortowaniu: ";
	for (auto x : wektor)
		cout << x << " ";
	cout << "Rozmiar wektora: " << wektor.size() << "\n";
	cout << "Element wektora z najwieksza wartocsia to: " << wektor.back() << " i jego index to: " << wektor.size()-1;
	


	

	//cout << wektor[0];
	//cout << wektor[1];
	//cout << wektor[2];

	return 0;
}