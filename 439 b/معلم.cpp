//439 b codeforces
#include<iostream>	
#include<algorithm>	
using namespace std;
int main()
{
long long int n, i, t,ch,*p,s=0;
	cin >> n>>t;
	p = new  long long int[n];
	for (i = 0; i < n; i++)
		cin >> p[i];
	sort(p, p + n);
	for (i = 0; i < n; i++)
	{
		s += p[i] * t;
		t--;
		if (t == 0)
			t = 1;
	}
	cout << s;
	system("pause");
}