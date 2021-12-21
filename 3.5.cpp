#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(NULL));
	int mass[20];
	int count = 1;
	mass[0] = rand() % 1000;
	cout << mass[0];
	int max_elem = mass[0];
	for (int i = 1; i < 20; ++i) {
		mass[i] = rand() % 1000;
		cout << ", " << mass[i];
		if (mass[i] > max_elem) {
			max_elem = mass[i];
			count = 1;
		}
		else if (mass[i] == max_elem)
			count++;
	}
	cout << "\nMax element in massive: " << max_elem << ";\nCount of max element in massive: " << count << ";\n";
}