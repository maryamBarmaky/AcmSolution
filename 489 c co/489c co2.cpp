#include<iostream>
#include<vector>
using namespace std;
vector<int> num; int len, sum;
bool res() {
	int Sum = 0;
	for (int i = 0; i < len; i++)
		Sum += num[i];
	if (sum == Sum) return true;
	return false;
}

int main() {
	cin >> len >> sum;
	if (len != 1 && sum == 0 || len * 9<sum) cout << -1 << " " << -1 << endl;
	else {
		for (int i = 0; i < len; i++)  num.push_back(0);
		bool status = false;
		if (res())  status = true;
		if (!status) num[0] = 1;
		if (res())  status = true;
		for (int i = len - 1; i >= 0; i--)
			if (!status) {
				for (int j = 0; j < 9; j++) {
					++num[i];
					if (res()) { status = true; break; }
				}
			}
		for (int i = 0; i < len; i++)
			cout << num[i];
		cout << " ";
		num.clear();
		for (int i = 0; i < len; i++)  num.push_back(0);
		status = false;
		if (res())  status = true;
		for (int i = 0; i <len; i++)
			if (!status) {
				for (int j = 0; j < 9; j++) {
					++num[i];
					if (res()) { status = true; break; }
				}
			}
		for (int i = 0; i < len; i++)
			cout << num[i];
		cout << endl;

	}

}