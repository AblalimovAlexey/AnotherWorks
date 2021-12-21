#include <iostream>
using namespace std;


int main() {
	int a, b, c, i = 0;
	cin >> a;
	while (a > 0){
		a /= 10;
		++i;
	}
	for (; i > 0; --i) {
		c = a % 10;
		for (int j = 0; j < i; ++j)
			c *= a % 10;
		b += c;
	}
	cout << a << " : " << b << endl;
	return 0;
}