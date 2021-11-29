#include <iostream>
using namespace std;

int main() {
	int number, a;
	bool znak, was = false;
	cin >> number;
	for (int i = 0; i < number; ++i) {
		cin >> a;
		if (a < 0 and !was)
			znak, was = true;
		if (a > 0 and !was)
			was = true;
	}
	if (znak == true)
		cout << "The negative number was first." << endl;
	else if (!znak and was)
		cout << "The positive number was first." << endl;
	else
		cout << "All numbers was '0'.";
	return 0;
}