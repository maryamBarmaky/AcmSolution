//in the name of god
#include<iostream>	
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,*a;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int c =1,s=a[0];
	for (int i = 1;i< n; i++)
	{
		if (a[i] >= s) {
			c++;
			s += a[i];
		}
	
	}
	cout << c;
	system("pause");
}