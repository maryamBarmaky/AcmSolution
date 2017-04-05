#include<iostream>	
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	const string a[] = { "","","2","3","223","5","35","7","2227","2337"};
	long long int n, m, i,t;
	string s;
	cin >> m >> n;
	for (i = 1; i <= m; i++)
	{
		t = n % 10;
		s += a[t];
		n /= 10;
	}
	sort(s.begin(), s.end());
	for (int j = s.length() - 1; j >= 0;j--)
	cout << s[j];
	return 0;
}