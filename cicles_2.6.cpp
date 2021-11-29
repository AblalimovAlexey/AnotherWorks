#include <iostream>
using namespace std;


int main() {
	int N;
	cin >> N;
	while (N < 2) {
		cout << "Enter the length of the triangle edge: ";
		cin >> N;
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (j >= N - i)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}