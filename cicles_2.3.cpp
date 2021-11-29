#include <iostream>
using namespace std;

int main() {
	int S, n, in;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		in = i;
		for (int j = 1; j <= i; ++j) {
			in *= i + j;
		}
		S += in;
	}
	cout << S << endl;
	return 0;
}