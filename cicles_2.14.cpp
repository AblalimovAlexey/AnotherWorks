#include <iostream>
using namespace std;


int main() {
	int number, summ = 0;
	cin >> number;
	while (number > 0) {
		summ += number % 10;
		number /= 10;
	}
	cout << summ << endl;
	return 0;
}