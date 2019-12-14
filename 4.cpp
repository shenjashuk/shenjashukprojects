#include <iostream>
#include <vector>
using namespace std;
int main()
{

	//можно плюсик за крсивое оформление
	setlocale(LC_ALL, "");
	vector <int> a;
	int x;
	cin >> x;
	int help = 1;
	for (int i = 0; i < x; i++) {
		for (int j = 1; j <= i; j++) {
			help *= j;
		}
		cout << i << "!= " << help << "\n";
		a.push_back(help);
		help = 1;

	}
	cout << "\n";
	int  n;
	cin >> n;
	cout << "\n";
	int help1;
	for (int i = 0; i < n; i++) {
		cin >> help1;
		if (help1 == x) {
			cout << help1 << "!= " << a[a.size() - 1] * help1 << "\n";
		}
		else if (help1 < 0) {
			cout << help1 << "!= не определено" << "\n";
		}
		else if (help1 > x) {
			cout << "неправильный ввод" << "\n";
			i--;
		}
		else {
			cout << help1 << "!= " << a[x - (x - help1)] << "\n";
		}
	}
	return 0;
}