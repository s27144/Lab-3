//#include <iostream>
//#include <string>
//using namespace std;
//string wyraz, wyraz2;
//int n, rozmiar;
//
//int main() {
//	cout << "Podaj wyraz do konkatenacji: ";
//	getline(cin, wyraz);
//	rozmiar = wyraz.length();
//	//strcpy(wyraz2, wyraz);
//
//	cout << "Podaj liczbe n: ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		
//	}
//
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Podaj slowo: ";
    cin >> word;

    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    string result;
    for (int i = 0; i < n; i++)
    {
        result += word;
    }

    cout << "Wynik: " << result << endl;

    return 0;
}

