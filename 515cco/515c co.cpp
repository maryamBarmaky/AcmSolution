#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string arr[] = { "","","2","3","322","5","53","7","7222","7332" };
int main()
{
	long long n, t;
	cin >> t;
	cin >> n;
	string s = "";
	while (n>0)
	{
		s += arr[n % 10];
		n /= 10;
	}
	sort(s.rbegin(), s.rend());
	cout << s;
	system("pause");

}