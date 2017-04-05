#include<iostream>	
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n, a[10], b[10], c[10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}
	c[0] = b[0] - a[0];
	for (int j = 1; j < n; j++)
		c[j] = c[j - 1] - a[j] + b[j];
	sort(c, c + n);
	cout << c[n - 1];
	
	system("pause");

}