//in the name of god
#include <iostream>
#include <string>
using namespace std;
int main() {
	int i = 0, n = 0, b, t = 0;
	string s;
	cin >> n >> t;
	cin >> s;
	for (i = 0; i<t; i++)
		for (int j = 1; j<n; j++) {
		if (s[j] == 'G'&&s[j - 1] == 'B') {
			swap(s[j], s[j - 1]);
			j++;
		}
	}
	cout << s;
	system("pause");
	return 0;
}
