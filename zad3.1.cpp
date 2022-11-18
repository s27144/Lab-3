#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Podaj liczbe x: ";
    cin >> x;
    cout << "Podaj liczbe y: ";
    cin >> y;
    cout << "\n";
    //Suma
    cout << "Suma: ";
    printf("%.2f\n", x + y);
    //Ró¿nica
    cout << "Roznica: ";
    printf("%.2f\n", x - y);
    //Iloczyn
    cout << "Iloczyn: ";
    printf("%.2f\n", x * y);
    //Iloraz
    cout << "Iloraz: ";
    if (y != 0) {
        printf("%.2f\n", x / y);
    }
    else {
        cout << "Nie mozna podzielic przez 0";
    }
    cout << "\n";
        
        
    return 0;
}