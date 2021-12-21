#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int i, n = 0;
	int iter = 1;
	float a, max_a;

	cin >> n >> a;
	max_a = i * n + n % 2;
	for (i = 1; i < n; ++i) {
		a = i * n + n % 2;
		if (a == max_a)
			++iter;
		else if (a > max_a) {
			max_a = a;
			iter = 1;
		}
	}
	cout << "The count of max value " << max_sin << " is " << iter << endl;
	return 0;
}