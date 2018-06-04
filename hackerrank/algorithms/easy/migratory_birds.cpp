#include <bits/stdc++.h>

using namespace std;

int main()
{
	long n, i;
	scanf("%ld", &n);
	int ar[5], cat, j;
	for(i=0; i<5; i++)
		ar[i] = 0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &cat);
		ar[cat-1]++;
	}
	int max_cat, max = 0;
	for(j=0; j<5; j++)
	{
		if(ar[j] > max)
		{
			max = ar[j];
			max_cat = j;
		}
	}
	printf("%d\n", max_cat+1);
}