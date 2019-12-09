#include <iostream>
using namespace std;
int poe(int x,int y) {
	int res=1;
	for (int i = 0; i < y;i++) {
		res *= x;
	}
	return res;
}
main{
	int x;
cin >> x;
int y = poe(x, 5) + poe(x, 4) + poe(x, 3) + poe(x, 2) + 25;
cout << y;
}
