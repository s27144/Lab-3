#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Podaj wymiary tablicy: ";
    cin >> m >> n;

    int** a = new int* [m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
    }

    cout << "Podaj elementy tablicy: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Pierwotna tablica: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++) {
        int temp = a[i][0];
        a[i][0] = a[i][1];
        a[i][1] = temp;
    }
    cout << "Nowa tablica: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    delete[] a;

    return 0;
}