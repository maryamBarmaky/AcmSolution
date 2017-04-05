//606 A CODE FORCES 
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, X, Y, Z;
	cin >> X >> Y >> Z >> a >> b >> c;
	X -= a; 
	if (X > 0) 
		X /= 2;
	  Y -= b;
	if (Y > 0)
		Y /= 2;
	Z -= c;
	if (Z > 0)
		Z /= 2;
	if (X + Y + Z >= 0) 
		cout << "YES";
	else
		cout << "NO";
	system("pause");
}