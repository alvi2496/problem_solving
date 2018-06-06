#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,i, count;
	scanf("%d", &n);
	int c[n];
	count = 0;
	int jump = 0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &c[i]);
		if( c[i] == 1 || jump > 2 ){
			count++;
			jump = 0;
		}
		else if( c[i] == 0 || jump <= 2 ){
			jump++;
		}

	}
	printf("%d\n", count);
	return 0;
}