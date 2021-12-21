#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	int mass[20];
	mass[0] = rand() % 1000;
	bool sort = false;

	cout << mass[0];
	int max_elem = mass[0];
	for (int i = 1; i < 20; ++i) {
		mass[i] = rand() % 1000;
		cout << ", " << mass[i];
		if (mass[i] > mass[i - 1])
			sort = true;
	}
	if (sort)
		cout << "\nMassive aren't sorted."
	else
		cout << "\nMassive are sorted.";
	return 0;
}