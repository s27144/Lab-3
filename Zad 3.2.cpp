#include <iostream>

using namespace std;

int main()
{
	char znak;
	int i = 0;
	cout << "Podaj znak: ";

	while (i < 1) {
		cin >> znak;
		if (znak == 't') 
		{
			cout << "Podany znak to 't'";
			i++;
		}
		else 
		{
			cout << "To nie znak 't', probuj dalej ;)\n";
			cout << "Podaj znak: ";
		}

	}

	return 0;
}