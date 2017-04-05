//in the name of god
#include<iostream>	
#include<string>
using namespace std;
int main()
{
	string s; int c = 0;
	cin >> s;
	int n = s.length();
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (s[i] == s[j])s[j] = 0;
	for (int i = 0; i < n; i++)
		if (s[i] != 0)c++;
	if (c % 2 == 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";
	system("pause");
	
}