#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int > a;
	int n;
	cin >> n;
	int o = 0;
	for (int i = 0; i < n; i++) {
		cin >> o;
		a.push_back(o);
	}
	int p;
	cin >> p;
	cout << a[p];
	if (a[p] % 9 == 1) {
		cout << " find it";
	}
	return 0;
}

