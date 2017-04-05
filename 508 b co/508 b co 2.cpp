#include<iostream>	
#include<string>	
#include<algorithm>	
using namespace std;
int main()
{
	string s;
	cin >> s;
	int t = -1;

	int n = s.length();

	for (int i = 0; i<n ; i++)
		if (s[i] % 2 == 0)
		{
			if (s[n- 1]>s[i])
			{
				swap(s[n - 1],s[i]);
				cout << s;
				return 0;
			}
			else
				t = i;
		}
	if (t == -1)
		cout << -1;
	else
	{
		swap(s[n- 1], s[t]);
		cout << s;
	}
	system("pause");
	return 0;
}
