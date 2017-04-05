#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int cntr = 0;
	for (int i = 0; i < a.size(); ++i)
	{
	//	if (a[i] >= 97 && a[i] <= 122)++cntr;
		if (a[i] == tolower(a[i]))cntr++;
	}
	if (cntr == 0) {
		for (int i = 0; i<a.size(); ++i)
			a[i] += 32;
		cout << a << endl;
	}
	else if (cntr == 1 && a[0] == tolower(a[0]))
	{
		a[0] -= 32;
		for (int i = 1; i<a.size(); ++i)
		//	if (a[i] >= 65 && a[i] <= 90)a[i] += 32;
			if (a[i] == toupper(a[i]))
				a[i] += 32;
		cout << a << endl;
	}
	else  cout << a << endl;
	system("pause");
}