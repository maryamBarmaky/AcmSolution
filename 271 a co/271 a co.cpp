//in the name of god
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int  y, t, a, b, c, d;
	cin >> y;
	y++;
		for (int i =y;; i++)
		{
			t = i;
			a = t % 10;
			t=t / 10;
			b = t % 10;
			t = t / 10;
			c = t % 10;
			t = t / 10;
			d = t % 10;
		/*	b = (t % 100) / 10;
			c = (t % 1000) / 100;
	     	d = t / 1000;*/
			if (a == b || a == c || a == d || b == c || b == d || c == d);
			else

			{
				cout << i <<  endl;
				system("pause");
				return 0;
			}
		
	}
}