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

