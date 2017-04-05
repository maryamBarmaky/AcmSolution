#include<iostream>
#include<string>
using namespace std;
void main() {
	string num;
	cin >> num;
	if (num.find("0000000") != -1 || num.find("1111111") != -1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}