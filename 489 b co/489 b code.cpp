sort(boys.begin(), boys.end());
sort(girls.begin(), girls.end());

for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++)
		if (abs(boys[i] - girls[j]) <= 1)
		{
			girls[j] = 1000;
			result++;
			break;
		}