#include <iostream>
using namespace std;

int main() {
	float a, b, c, x1, x2, x0, delta;
	cout << "Postac ogolna funkcji kwadratowej wynosi: ax^2+bx+c=0\n";

	cout << "Podaj A:\n";
		cin >> a;
	cout << "Podaj B:\n";
		cin >> b;
	cout << "Podaj C:\n";
		cin >> c;
		cout << "Twoja funkcja wynosi: " << a << "x^2" << " + " << b << "x + " << c << " = 0\n";
		cout << "Wzor na delte wynosi: b^2 - 4*a*c\n";
		delta = (b*b) -4*a*c;
		cout << "Delta wynosi: " << delta << "\n";
		if (delta<0){
			cout << "Delta < 0, brak pierwiastkow\n";
		}
		else if (delta == 0) {
			x0 = (-1 * b) / (2 * a);
			cout << "Delta = 0, pierwiastek x0 wynosi: " << x0;

		}
		else {
			x1 = ((-1 * b) - sqrt(delta)) / (2 * a);
			x2 = ((-1 * b) + sqrt(delta)) / (2 * a);
			cout << "Delta > 0, funkcja ma dwa pierwiastki: \n" << x1 << " oraz " << x2;

		}
	return 0;
}
