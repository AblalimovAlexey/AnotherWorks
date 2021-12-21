#include <iostream>
using namespace std;


int main() {
	int n, s = 0;
	int pow = 3;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		if (i == pow) {
			s -= i;
			pow *= 3;
		}
		else
			s += i;
	}
	cout << s << endl;
	return 0;
}