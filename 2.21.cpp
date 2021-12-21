#include <iostream>
using namespace std;


int main() {
	bool flag = false;
	int next, prev = 1;
	cin >> prev;
	while (next != 0) {
		cin >> next;
		if (next <= prev) {
			flag = true;
		}
		prev = next;
	}
	if (flag == true)
		cout << "Line is not sorted.\n";
	else
		cout << "Line is sorted\n";
}