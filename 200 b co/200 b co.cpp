#include<iostream>
using namespace std;
int main()
{
	int n, a, i, s = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		s = s + a;
	}
	cout << (double)s / n;
	return 0;
}