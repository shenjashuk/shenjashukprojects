#include <iostream>
#include <string>
using namespace std;

int main(){
	int x;
	string h = "Evgenij Kemaev";
	cin >> x;
	if (x%2==0) {
		for (int i = 0; i < x;i++) {
			cout << h << "\n";
		}
	}
	else {
		cout << "C++ is very cool";
	}
	return 0;
}

