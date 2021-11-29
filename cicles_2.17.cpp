#include <iostream>
using namespace std;

int pow(int a, int b = 2) {
	for (int i = 0; i < b; ++i)
		a *= a;
	return a;
}

int main() {
    float s, n, x = 0;
    int factorial = 1;
    cin >> n >> x;
    s++;
    for (int i = 1; i < n; i++) {
        z = z * i;
        s += (pow(x, i) / z);
    }
    cout << s;
    return 0;
}