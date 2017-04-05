//508 b code forces
#include<iostream>	
#include<string>	
#include<algorithm>	
using namespace std;
int main()
{
	string s,f;  int  t = -1, n,j;
	cin >> s;
	n = s.length();
	for (j = 0; j < n;j++)
	{
		if (s[j] % 2 == 0) {
			t = j;
			if (s[j] < s[s.size() - 1])
				break;
		}
	}

	if (t != -1) {
	swap(s[t], s[n - 1]);
		cout << s;
	}

	else
		cout << "-1";
	system("pause");
}