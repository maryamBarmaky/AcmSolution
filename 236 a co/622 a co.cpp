#include<iostream>	
using namespace std;
int main()

{
		long long n, r = 1;
		cin >> n; 
		while (n > r)
		{
			n -= r; r++;
		}
		cout << n << endl;
		system("pause");
	
}