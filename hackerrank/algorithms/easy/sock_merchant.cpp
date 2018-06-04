#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, i, j;
	scanf("%d", &n);
	int socks[n];
	int pairs[101];
	for(i=0; i<101; i++)
		pairs[i] = 0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &socks[i]);
		pairs[socks[i]]++;
	}
	int pair_count = 0;
	for(i=1; i<101; i++)
		pair_count += pairs[i] / 2;
	printf("%d", pair_count);
}