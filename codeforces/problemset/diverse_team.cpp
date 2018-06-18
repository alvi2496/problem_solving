#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, m, i, j, r;
	scanf("%d %d", &n, &k);
	vector<int> index;
	bool num[101];
	for(i=1; i<=100; i++)
		num[i] = false;
	for(i=0; i<n; i++)
	{
		scanf("%d", &r);
		if(num[r] == false)
		{
			index.push_back(i+1);
			num[r] = true;
		}
	}
	if(index.size() >= k)
	{
		printf("YES\n");
		for(i=0; i<index.size(); i++)
			printf("%d ", index[i]);
		printf("\n");
	}
	else
		printf("NO");
	return 0;
}