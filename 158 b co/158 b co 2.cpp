#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, f,cnt=0;
	cin >> n;
	int gr[100001];
	for (int i = 0; i < n; i++)
		cin >> gr[i];
	for (int i = 0; i < n; i++)
	{
		if (gr[i] == 4) {
			cnt++;
			f = i;
			while (f <= n)
			{
				gr[f] = gr[f + 1];
				f++;
			}
			n--;
		}
	}
	sort(gr, gr + n);

	int i = 0, j = n-1 ;
	while (i < j)
	{
		int x = gr[j];
		while (gr[i] + x <= 4)
		{
			x += gr[i];
			i++;
		}
		j--;
		cnt++;
	}
	if (i == j)
		cnt++;
	cout << cnt;
	system("pause");
}