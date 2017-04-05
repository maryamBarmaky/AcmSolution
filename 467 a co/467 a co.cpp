#include<iostream>
using namespace std;
int main()
{
	int n, p, q, c, t = 0;
	cin >> n;
	cout << endl;
	for (c = 1; c <= n; c++)
	{
		cin >> p >> q;
		cout << endl;
		if (p<q&&q - p != 1)
		{
			t = t + 1;
		}
	}
	cout << t << endl;
}