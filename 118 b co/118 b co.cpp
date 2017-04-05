#include <stdlib.h>
#include <iostream>
using namespace std;
int n, i, j;
int main() {
	cin >> n;
	for (i = 0; i <= n; i++) {
		for (j = 0; j < (n - i); j++)
			cout << "  ";
		for (j = 0; j <= i; j++) {
			cout << j;
			if (j < i)
				cout << " ";
		}
			for (j = j - 2; j >= 0; j--)
			cout << " " << j;
		cout << endl;
	}
	for (i = n - 1; i >= 0; i--) {
		for (j = n; j>i; j--)
			cout << "  ";
		for (j = 0; j <= i; j++) {
			cout << j;
			if (j<i)
				cout << " ";
		}
		for (j = j - 2; j >= 0; j--)
			cout << " " << j;
		cout << endl;
	}
	system("pause");
}