#include <iostream>
#include <cmath>
using namespace std;


void A(float N) {
	while (sqrt(N) % 1 != 0 or N == 1) {
		cout << "Enter another number." << endl;
		cin >> N
	}
	N = sqrt(N);
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void B(float N) {
	while (N == 1) {
		cout << "Enter another number." << endl;
		cin >> N;
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << "* ";
		}
		cout << endl;
	}
}

void C(float N) {
	while (N == 1) {
		cout << "Enter another number." << endl;
		cin >> N;
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (i > 0 and i < N - 1 and (j != 0 or j != N - 1))
				cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;
	}
}


int main() {
	int N;
	cin >> N;
	cout << A(N) << B(N) << C(N);
	return 0;
}