#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0;
	cout << "Enter three number." << endl;
	cin >> a >> b >> c;
	if (a > b and a > c)
		cout << "Max number is: " << a << endl;
	else if (b > c)
		cout << "Max number is: " << b << endl;
	else
		cout << "Max number is: " << c << endl;
	return 0;
}