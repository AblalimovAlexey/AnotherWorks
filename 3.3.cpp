#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	const int length = 5;
	int mass[length];
	int pull;
	for (int i = 0; i < length; ++i) {
		mass[i] = rand() % 100;
		cout << mass[i] << ';';
	}
	for (int i = 0; i < length - 1; ++i) {
		for (int j = i + 1; j < i - 1; ++j) {
			if (mass[j] > mass[j + 1]) {
				pull = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = pull
			}
		}
	}
	cout << endl;
	for (int i = 0; i < length; ++i)
		cout << mass[i] << ';';
	return 0;
}