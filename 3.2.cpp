#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	const int length = 5;
	int mass[length];
	int min, buf;
	for (int i = 0; i < length; ++i) {
		mass[i] = rand() % 100;
		cout << mass[i] << ';';
	}
	for (int i = 0; i < length - 1; ++i) {
		int it = i;
		for (int j = i + 1; j < length; ++j)
			if (mass[j] < mass[it])
				it = j;
		buf = mass[i];
		mass[i] = mass[it];
		mass[it] = buf;
	}
	cout << endl;
	for (int i = 0; i < length; ++i)
		cout << mass[i] << ';';
	return 0;
}