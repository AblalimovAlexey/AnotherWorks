#include <iostream>
#include <cmath>
using namespace std;


int main() {
	float a, b, c, x, x2;
	cout << "Enter the quadratic equation. It is enough to enter coefficients.\n";
	cin >> a >> b >> c;
	cout << "The introduced equation: " << a << "x^2 + " << b << "x + " << c << "= 0\n";
	if (b*b - 4*a*c < 0)
		cout << "The introduced equation has no roots.\n";
	else if (b*b - 4*a*c == 0) {
		x = -b / (2*a);
		cout << "The introduced equation has one root:\nx = " << x << endl;
	}
	else {
		x = (-b + sqrt(b*b - 4*a*c)) / (2*a);
		x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
		cout << "The introduced equation has two roots:\nx = " << x << "\nx2 = " << x2 << endl;
	}
	return 0;
}