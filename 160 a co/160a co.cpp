#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int i, n, a[500], s1 = 0, s2 = 0;
	cin >> n;
	for (i = 0; i<n; i++) { cin >> a[i]; s1 += a[i]; }
	sort(a, a + n);
	for (i = 0; i<n; i++)
	{ s1 -= a[i]; s2 += a[i]; 
	if (s1 <= s2)
	{ cout << n - i; 
	return 0; } 
	}
	return 0;
}