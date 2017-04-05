#include<stdio.h>
#include<string.h>
void main()
{
	int t, l, i, j;
	char a[1001];
	scanf("%s", a);
	l = strlen(a);
	for (i = 0; i<l; i += 2)
	{
		int k;
		for (j = i + 2; j<l; j += 2)
			if (a[i]>a[j])
			{
				k = a[j];
				a[j] = a[i];
				a[i] = k;
			}
	}
	printf("%s\n", a);
}
