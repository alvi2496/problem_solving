#include <bits/stdc++.h>

using namespace std;

int main()
{
	long b, c, min, tmp;
	int n, m, i, j;
	scanf("%ld %d %d", &b, &n, &m);
	long x[n], y[m];
	for(i=0; i<n; i++)
		scanf("%ld", &x[i]);
	for(i=0; i<m; i++)
		scanf("%ld", &y[i]);
	c = -1;
	min = 1000001;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			tmp = x[i] + y[j];
			if( (tmp <= b) && ((b - tmp) < min) )
			{
				c = tmp;
				min = b - tmp;
			} 
		}
	}
	printf("%ld\n", c);
	return 0;
}