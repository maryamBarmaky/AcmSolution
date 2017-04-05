//616 b code forces
#include<iostream>
#include<string>
using namespace std;
int main() {
	int f;
	string a, b;
	cin >> a;
	cin >> b;
	f= (int) a.length();
	int n = abs((int) a.length() -(int) b.length());
	cout<<n;
	string leadz(n, '0');
  if (a.length() < b.length()) {
		a = leadz + a;
	}
	else {
		b = leadz + b;
	}

	if (a > b)cout << ">" << endl;
	else if (b > a)cout << "<" << endl;
	else cout << "=" << endl;
	system("pause");
	return 0;
	
}