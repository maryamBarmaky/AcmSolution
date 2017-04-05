#include <iostream>
#include <algorithm>
using namespace std;
const int N = 3000;
int main()
{
	int A[N], n, i, answer = 0, max = 0, j, count;
	cin >> n;
	for (i = 0; i<n; i++)
	{
		cin >> A[i];
	}
	sort(A, A + n);
	for (i = 1; i<n; i++)
	{
		while (A[i] <= A[i - 1])
		{
			A[i]++;
			answer++;
		}
	}
	cout << answer << endl;
	system("pause");
}