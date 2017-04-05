#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int i, j, k;
	for (int i = 0; i<s.length()-2;i++)
	{
		for (int j = i + 1; j<s.length()-1; j++)
		{
			for (int k = i +2; k<s.length(); k++)
			{
				int t= (s[i]-'0')*4+(s[j]-'0')*2+s[k]-'0';
				if (t % 8 == 0)
				{
					cout << "YES" << endl;
					t=(s[i]-'0')*100+(s[j]-'0')*10+s[k]-'0';
					cout << t << endl;
					system("pause");
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	system("pause");
	return 0;
}