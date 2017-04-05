/*#include <iostream>
using namespace std;
int main()
{
	char c[1000];
	cin >> c;
	for (int i = 0; c[i]; i++)
		if (!strchr("AOYEUI", toupper(c[i])))
			cout << "." << char(tolower(c[i]));
}8*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str;
	while (cin >> str)
	{
		str = tolower(str);
		if (!strchr("aoyeui", str))
			cout << "." << str;
	}
	system("pause");
	return 0;
}
