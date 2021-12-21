#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	int mass[20];
	mass[0] = rand() % 1000;
	cout << mass[0];
	int max_elem = mass[0];
	for (int i = 1; i < 20; ++i) {
		mass[i] = rand() % 1000;
		cout << ", " << mass[i];
		if (mass[i] > max_elem)
			max_elem = mass[i];
	}
	cout << "\nMax element of massive: " << max_elem << ";\n";
}