#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int i, j,c=0, b, g, boy[100] , girl[100] ;
	cin >> b;
	for (i = 0; i < b; i++)
		cin >> boy[i];
	cin >> g;
	for (i = 0; i < g; i++)
		cin >> girl[i];
	sort(boy, boy+b);
	sort(girl, girl+g);
	for (i = 0; i < b;i++)
		for (j = 0; j < g; j++)
			if (girl[j] == boy[i] || girl[j] == boy[i] + 1 || girl[j] == boy[i] - 1) {
				c++;
				girl[j] = -1;
				break;
			}
	cout << c << endl;
	return 0;
}