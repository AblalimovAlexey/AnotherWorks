//Перевернуть массив целых
#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	const int length = 21;
	int mass[length];
	int a;
	
	for (int i = 0; i < length; ++i) {
		mass[i] = rand() % 100;
		cout << mass[i] << ';';
	}
	for (int i = 0; i < length / 2; ++i) {
		a = mass[i];
		mass[i] = mass[length - 1 - i];
		mass[length - 1 - i] = a;
	}
	cout << endl;
	for (int i = 0; i < length; ++i)
		cout << mass[i] << ';';
	return 0;
}