#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, i, j, count;
	scanf("%d %d", &n, &k);
	int num[n];
	for(i=0; i<n; i++)
		scanf("%d", &num[i]);
	count = 0;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if((num[i] + num[j]) % k == 0 )
				count++;
		}
	}
	printf("%d", count);
	return 0;
}
