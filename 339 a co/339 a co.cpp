#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main() {
	string s;
	cin >> s;
	string s2 = "";
	for (int i = 0; i<s.length(); i++)
		if (s[i] != '+')s2 += s[i];
	sort(s2.begin(), s2.end());
	for (int i = 0; i<s2.length() - 1; i++)
		cout << s2[i] << "+";
	cout << s2[s2.length() - 1] << endl;
	system("pause");
}