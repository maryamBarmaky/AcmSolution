 //615 b code forces 
#include "iostream"
using namespace std;
int a[101], n, m, i, b, j, c;
int main()
{
	cin >> n >> m;
	for (i = 0; i<n; i++)
	{ 
		  cin >> b;
	      for (j = 0;j<b; j++)
    	     {  
		     	cin >> c;
	            a[c] = 1;
    	     } 
	 }
	for (j = 1; j <= m; j++)
		if (a[j] != 1)
		{ cout << "NO"; return 0; }
	cout << "YES";
	system("pause");
}