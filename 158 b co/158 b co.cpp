#include<iostream>
using namespace std;
#include<math.h>
void main()
{

	int x, count[5] = { 0 }, num, ans;
	cin >> x;
	for (int i = 0; i<x; i++)
	{

		cin >> num;
		count[num]++;
	}

	if (count[1] >= count[3]) count[1] -= count[3];
	else count[1] = 0;

	cout << count[4] + (count[1] + 2 * count[2] + 3) / 4 + count[3];

	system("pause");


}