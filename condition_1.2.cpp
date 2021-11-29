#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b = 0;
	cin >> a >> b;
	if (b == 0)
		cout << "На нуль делить нельзя." << endl;
	else
		cout << (float)a / b << endl;
	return 0;
}