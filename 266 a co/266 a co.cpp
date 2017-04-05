#include <iostream>
#include<string>	
using namespace std;
int main()
{
	int x;
	cin >> x;
	char a[50];
	cin >> a;
	int count = 0;
	for (int i = 0; i<strlen(a); i++)
	{
		if (a[i] == a[i + 1]) count++;
	}
	cout << count << endl;
}