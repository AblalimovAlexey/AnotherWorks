#include <iostream>
using namespace std;

int main() {
	int n;
	float a;
	float summ = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		summ += a;
	}
	cout << summ << endl;
	return 0;
}