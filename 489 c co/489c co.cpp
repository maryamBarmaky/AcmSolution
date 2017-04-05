#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int l, s, t, k = 0;
	cin >>l>> s;
	t = s;
	string max = "", min = "";
	char a;
	if (s == 0)
		if (l == 1)
			cout << "0 0";
		else
			cout << "-1 -1";
	else {
		if (s % 9 != 0)
			k++;
		k += s / 9;
		if (k > l)
			cout << "-1 -1";
		else {
			while (s > 9) {
				max += '9';
				s -= 9;
			}
			if (s>0) {
				a = s + '0';

				max += a;
				s = 0;
			}
			while (max.size()<l)
				max += '0';
			while (t>10) {
				min = '9' + min;

				t-= 9;
			}
			if (t>1 && min.size()<l-1) {
				a = t - 1 + '0';
				min = a + min;
				t= 1;
			}
			while (min.size()<l-1)
				min = '0' + min;
			if (t>0) {
				a = t + '0';
				min = a + min;
				t = 0;
			}
			cout <<min << " " << max;
		}
	}
	system("pause");
}


