#include <iostream>
#include <vector>
using namespace std;

struct Students {
	string fullname;
	int age;
	int classnumber;
	char classletter;

	friend int studentinclass(vector <Students> student, int c, char c1) {
		int res=0;
		for (int i = 0; i < student.size();i++) {
			if (student[i].classnumber == c && student[i].classletter == c1) {
				res++;
			}
		}
		return res;
	}
	friend int studentinage(vector <Students> student, int c) {
		int res = 0;
		for (int i = 0; i < student.size(); i++) {
			if (student[i].age == c) {
				res++;
			}
		}

		
		return res;
	}
	friend void changingstudentclass(Students s, char classl) {
		s.classletter = classl;
	}

	friend bool mysort(Students s,Students s2) {
		if (s.age< s2.age) {
			return true;
		}
		if (s.age == s2.age && s.classnumber< s2.classnumber) {
			return true;
		}
		return false;
	}
};
int main()
{
	int n;
	cin >> n;
	vector <Students> student(n);
	for (int i = 0; i < n;i++) {
		cin >> student[i].fullname; 
		cin >> student[i].age >> student[i].classnumber >> student[i].classletter;
	}
	while (true) {
		cout << "What do you want to do"<<"\n";
		cout << "1)How many students in class" << "\n";
		cout << "2)How many students of some age" << "\n";
		cout << "3)Change class letter of student " << "\n";
		cout << "4)Sort all students"<<"\n";
		cout << "5)Exit" << "\n";
		int uio;
		string name;
		Students s;
		int u = 0;
		Students tmp;
		cin >> uio;
		switch (uio) {
		case 1:
			char k;
			int k1;
			cout << "print class number"<<"\n";
			cin >> k1;
			cout << "print class letter" << "\n";
			cin >> k;
			cout << studentinclass(student,k1,k)<<"\n";
			break;
		case 2:
			int ad;
			cout << "print age of students" << "\n";
			cin >> ad;
			cout <<studentinage(student,ad) <<"\n";
			break;
		case 3:
			cout << "print name of student" << "\n";
			cin >> name;	
			for (int i = 0; i < n; i++) {
				if (student[i].fullname == name) {
					s = student[i];
					u++;
				}
			}
			if (u == 0) {
				cout << "Nothing" << "\n";
			}
			else {
				char letter;
				cout << "print class letter" << "\n";
				cin >> letter;
				changingstudentclass(s, letter);
				cout << "Success"<<"\n";
			}
			break;
		case 4:
			
			for (int i = 0; i < n-1;i++) {
				for (int j = i+1; j < n;j++) {
					if ( mysort(student[i] , student[j]) ) {
						tmp = student[i];
						student[i] = student[j];
						student[j] = tmp;
					}
				}
			}
			cout << "new version: ";
			for (int i = 0; i < n;i++) {
				cout << student[i].fullname<<" ";
			}
				cout <<"\n";
			break;
		case 5:
			return 0;
			break;
		default:
			cout << "FATAL ERROR"<<"\n";
		}
	}
}

