#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i, j, k, count;
	scanf("%d", &n);
	int c[n];
	count = 0;
	int jump = -1;
	for(i=0; i<n; i++)
		scanf("%d", &c[i]);
	for(i=0; i<n; i++, jump++)
	{
		if(i < n-2 && c[i+2] == 0)
			i++;
	}
	printf("%d\n", jump);
}