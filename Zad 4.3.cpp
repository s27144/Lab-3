#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	int table[10][10];

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			if (x == 0) {
				table[x][y] = y;
			}
			else if (x == 1) {
				table[x][y] = y * 2;
			}
			else if (x == 2) {
				table[x][y] = y * y;
			}
			else if (x == 3) {
				table[x][y] = x + y + 2;
			}
			else if (x == 4) {
				table[x][y] = (y + 1) - (x + 1);
			}
			else {
				table[x][y] = 0;
			}

		}
	}

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			cout << setw(2);
			cout << table[y][x] << " ";
		}
		cout << endl;
	}





	return 0;
}