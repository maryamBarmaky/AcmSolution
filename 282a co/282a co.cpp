#include<iostream>	
#include<string>	
using namespace std;
int main()
{
	int n,t, c = 0; string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		t = -1;
		t = s.find("+");
		if (t >= 0)c++;
		t = -1;
		t = s.find("-");
		if (t >= 0)c--;
	}
	cout << c << endl;
	system("pause");
}