#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, z, n, i, cat_a, cat_b;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d %d %d", &x, &y, &z);
		cat_a = abs(x-z);
		cat_b = abs(y-z);
		if(cat_a < cat_b)
			printf("Cat A\n");
		else if( cat_a > cat_b)
			printf("Cat B\n");
		else
			printf("Mouse C\n");
	}
	return 0;
}