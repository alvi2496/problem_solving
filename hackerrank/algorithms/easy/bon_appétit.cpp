#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, i;
	long cost, split;
	scanf("%d %d", &n, &k);
	int b[n];
	for(i=0; i<n; i++)
		scanf("%d", &b[i]);
	scanf("%ld", &split);
	cost = 0;
	for(i=0; i<n; i++)
	{
		if(i != k)
			cost += b[i];
	}
	cost = cost/2;
	if(cost == split)
		printf("Bon Appetit\n");
	else
		printf("%ld\n", split - cost);
	return 0;
}