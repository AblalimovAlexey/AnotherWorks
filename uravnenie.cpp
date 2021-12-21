//3*sin(sqrt(x)) + 0.35x - 3.8 = 0
//`f = 3cos(sqrt(x))/(2*sqrt(x)) + 0.35
//``f = (-3sin(sqrt(x)) - 3cos(sqrt(x))/sqrt(x)) / 4x|| -0.75(cos(sqrt(x))/sqrt(x*x*x) - sin(sqrt(x))/x)
// f(b) * f''(b) > 0
#include <iostream>
#include <cmath>
using namespace std;


void HalfEq() {
	float a, b, c;
	float fA, fB, fC;
	double eps = 0.000001;

	a = 2;
	b = 3;
	while (b - a > eps) {
		c = (a + b) / 2;
		fA = 3*sin(sqrt(a)) + 0.35*a - 3.8;
		fB = 3*sin(sqrt(b)) + 0.35*b - 3.8;
		fC = 3*sin(sqrt(c)) + 0.35*c - 3.8;
		if (fA * fC < 0)
			b = c;
		else if (fC * fB < 0)
			a = c;
		else
			cout << "Что-то пошло не так\n";
	}
	cout << "Roots: " << a << " ; " << b << endl;
}

void Iteration() {
	float x, xPre;

	x = 3;
	xPre = 0;
	double eps = 0.000001;

	while (abs(x - xPre) > eps) {
		xPre = x;
		x = xPre - (3cos(sqrt(xPre))/(2*sqrt(xPre)) + 0.35) / (3cos(sqrt(xPre))/(2*sqrt(xPre)) + 0.35);
	}
	cout << "Root: " << x << endl;
}

void Newton() {
	float x, xPre;
	x = 3;
	xPre = 0;
	double eps = 0.000001;

	while (abs(x - xPre) > eps) {
		xPre = x;
		x = xPre - (3*sin(sqrt(x)) + 0.35x - 3.8)/-0.75(cos(sqrt(x))/sqrt(x*x*x) - sin(sqrt(x))/x);
	}
	cout << "Root: " << x << endl;
	return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	//x = [2;3]
	HalfEq();
	Newton();
	return 0;
}