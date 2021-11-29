#include <iostream>
using namespace std;


int main() {
	int n, summ = 0;
	int z, summZ = 0;
	cin >> n >> z;
	for (int i = 1; i <= n; ++i) {
		if (i % 2 != 0)
			summ -= i;
		else
			summ += i;
		if (i / z = 0)
			summZ += i;
	}
	cout << summ << endl;
	cout << summZ << endl;
	return 0;
}