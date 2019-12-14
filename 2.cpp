#include <iostream>
#include <string>
using namespace std;

int main(){
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	int mult = 1, sum = 0;
	for (int i = a; i <= b; i++) {
		if (i % 3 == 0) {
			mult *= i;
		}
	}
	if (mult != 1) {
		cout << mult;
	}
	else {
		cout << "0";
	}
	cout << "\n";
	for (int i = x; i < y; i++) {
		if (i % 13 == 0) {
			sum += i;
		}
	}
	cout << sum;

	return 0;
}

