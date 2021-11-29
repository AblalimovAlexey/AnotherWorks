#include <iostream>
using namespace std;


int main() {
	int number, z = 0;
	bool flag = false;
	cin >> number;
	while (number > 0) {
		if (number % 10 = z) {
			flag = true;
			break;
		}
		number /= 10;
	}
	if (flag)
		cout << "The digit " << z << "occurs in the entered number.\n";
	else
		cout << "The digit " << z << "does not occur in the entered number.\n";
	return 0;
}