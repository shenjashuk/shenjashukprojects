#include <iostream>
using namespace std;
main{
int x,c,b,v;
int u;
cin << x << c << v << b;
if (c > x) {
	u = x;
	x = c;
	c = u;
}
if (b > x) {
	u = x;
	x = b;
	b = u;
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
if (v > b) {
	u = b;
	b = v;
	v = u;
}
cout << u << " " << v;
}