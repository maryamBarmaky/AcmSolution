//inthe name of god
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s, s1;
	cin >> s;
	s1 = "hello";
	int j = 0;
	for (int i = 0; i<s.size(); i++)
	{
		if (s[i] == s1[j])
			j++;
	}
	if (j == 5)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
