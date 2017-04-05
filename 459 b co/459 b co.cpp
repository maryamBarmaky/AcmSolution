#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long n, *a, k=0, m=0, sm1, sm2, i, s;
	cin >> n;
	a = new long long int[n];
	for (i = 0; i<n; i++)
		cin >> a[i];
	sort(a, a + n);
	sm1 = a[0];
	sm2 = a[n - 1];
	for (i = 0; i<n; i++)
	{
		if (a[i] == sm1)
			k++;
		if (a[i] == sm2)
			m++;
	}
	s = k*m;
	if (m == n)
		s = n*(n - 1) / 2;
	cout << sm2 - sm1 << " " << s;
	system("pause");
	return 0;
}