//сортировка вставками
#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	const int length = 10;
	int mass[length];
	for (int i = 0; i < length; ++i) {
		mass[i] = rand() % 100;
		cout << mass[i] << ';';
	}
	for (int i = 1; i < length; ++i) {
		int key = mass[i];
		int a = i - 1;
		while (i >= 0 and key < mass[a]) {
			mass[a + 1] = mass[a];
			--a;
		}
		mass[a + 1] = key;
	}
	cout << endl;
	for (int i = 0; i < length; ++i)
		cout << mass[i] << ';';
	return 0;
}