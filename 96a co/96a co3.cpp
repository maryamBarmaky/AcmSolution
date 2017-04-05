#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() {
	int count = 0;
	char s[1000],a;
	cin >> s;
	if (strstr(s, "1111111") || strstr(s, "0000000"))
		cout << "YES";
	else
		cout << "NO";

}