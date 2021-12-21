#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int i, n = 0;
	int iter = 1;
	float sin, max_sin;

	cin >> n >> sin;
	max_sin = sin(n);
	for (i = 1; i < n; ++i) {
		sin = sin(n + i/n);
		if (sin == max_sin)
			++iter;
		else if (sin > max_sin) {
			max_sin = sin;
			iter = 1;
		}
	}
	cout << "The count of max value " << max_sin << " is " << iter << endl;
	return 0;
}