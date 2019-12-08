#include <iostream>
using namespace std;
int poe(int x,int y) {
	for (int i = 0; i < y;i++) {
		x *= x;
	}
	return x;
}
main{
	int x;
cin >> x;
int y = poe(x, 5) + poe(x, 4) + poe(x, 3) + poe(x, 2) + 25;
cout << y;
}
