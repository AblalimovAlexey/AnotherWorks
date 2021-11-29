#include <iostream>
using namespace std;

int main() {
	int n,max, min, a;
	cin >> n >> a;
	max, min = a;
	for(int i = 0; i < n - 1; ++i) {
		cin >> a;
		if (a < min){
			min = a;
		}
		if (a > max)
			max = a;
	}
	cout << "The minimum was: " << min << endl;
	cout << "The maximum was: " << max << endl;
	cout << "Summ of max and min elements: " << max + min << endl;
	return 0;
}