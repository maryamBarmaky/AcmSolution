//266 b code forces 
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n, t;
	string s;
	cin >> n >> t >> s;
	for (int i = 0; i<t; i++) {
		for (int j = 0; j<n; j++) {
			if (s[j] == 'b'&&s[j + 1] == 'g') {
			//	s[j] = 'G';
			//	s[j + 1] = 'B';
				swap(s[j], s[j + 1]);
				j++;
			}
		}
	}
	cout << s << endl;
	system("pause");
}