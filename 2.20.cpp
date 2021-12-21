//sin(n + i/n) include z?
#include <iostream>
#include <cmath>
using namespace std;


int main() {
	float n, s, a = 0;
	int i = 1;
	bool flag = false;
	cin >> n >> z;
	if (z > 1 or < -1)
		return 1;
	while (i <= n and !flag) {
		a = sin(n + i/n);
		a = round(a*10) / 10;
		if (a == z) {
			flag = true;
		}
		else
			i++;
	}
	cout << s << endl;
	return 0;
}