//535 A code forces
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int s;
	string word[20] = { "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" };
	string word2[8] = { "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };
	cin >> s;
	if (s <= 19)
		cout << word[s];
	else if (s % 10 == 0)
		cout << word2[s / 10 - 2] << endl;
	else cout << word2[s / 10 - 2] << "-" << word[s % 10] << endl;
	system("pause");
	return 0;
}