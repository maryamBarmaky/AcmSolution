#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int m = 1;
	for (int i = 0; s[i]; ++i)
	{
		if (s[i] == s[i + 1])m++;
		else m = 1;
		if (m >= 7)break;
	}
	if (m >= 7)cout << "YES" << endl;
	else cout << "NO" << endl;
}