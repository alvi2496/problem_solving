#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, i;
	scanf("%d", &n);
	int num[n];
	for(i=0; i<n; i++ )
	{
		scanf("%d", &num[i]);
		if(num[i] >= 38 && (num[i] % 5) != 0){
			if(((num[i] + 1) % 5) == 0)
				num[i] += 1;
			else if (((num[i] + 2) % 5) == 0)
				num[i] += 2;
		}
		printf("%d\n", num[i]);
	}
	return 0;
}