#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n < 3 or n % 2 == 0) {
		cout << "Enter the length of the triangle edge: ";
		cin >> n;
	}
	for (int i = 0; i <= n / 2; ++i) {
		for (int j = 0; j <= n / 2 + i; ++j) {
			if (j < n / 2 - i)
				cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;
	}
	return 0;
}