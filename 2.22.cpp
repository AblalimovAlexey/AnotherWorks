#include <iostream>
#include <cmath>
using namespace std;


int main() {
	float a, max;
	int n, n_max, n_max2;
	bool flag = false;
	cin >> n;
	max = sin(n);
	for (int i = 1; i <= n; ++i) {
		a = sin(n + i/n);
		if (a > max and !flag) {
			max = a;
			n_max = i;
			flag = true;
		}
		else if (a == max and flag)
			n_max2 = i;
	}
	cout << "The max number is " << max << " in position " << n_max;
	if (flag)
		cout << " and " << n_max2;
	cout << ".\n";
	return 0;
}