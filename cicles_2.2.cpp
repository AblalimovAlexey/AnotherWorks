#include <iostream>
using namespace std;

int main() {
	int n;
	float a;
	float prod = 1;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		prod *= a;
	}
	cout << prod << endl;
	return 0;
}