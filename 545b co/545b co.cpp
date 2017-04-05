//in the name of god
#include<iostream>	
#include<string>	
using namespace std;
int main()
{
	string s, t, p="";
	int cntr = 0, k = 0;
	cin >> s >> t;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == t[i])p = p + s[i];
		else {
			if (k == 0)
			{
				p = p + s[i];
				k = 1;
				cntr++;
			}
			else
			if (k == 1)
			{
				p = p + t[i];
				k = 0;
				cntr++;
			}
		}
	}
	if (cntr % 2 == 0)cout << p << endl;
	else
		cout << "impossible" << endl;
	system("Pause");
}