#include <iostream>
#include <string>
using namespace std;
main{
int x,c,v;
int u;
cin << x << c << v;
if (c>x) {
	u = x;
	x = c;
	c = u;
}
if (v > x) {
	u = x;
	x = v;
	v = u;
}
if (v > c) {
	u = c;
	c = v;
	v = u;
}

cout << u << " " << v;
}