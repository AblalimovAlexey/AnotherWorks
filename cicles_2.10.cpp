#include <iostream>
using namespace std;

int main() {
	int number;
	int max, imax, a;
	cin >> number;
	max = 0;
	for(int i = 0; i < number; ++i) {
		cin >> a;
		if (a > max){
			max = a;
			imax = i;
		}
	}
	cout << "Max number is " << max << " in position " << imax << endl;
	return 0;
}