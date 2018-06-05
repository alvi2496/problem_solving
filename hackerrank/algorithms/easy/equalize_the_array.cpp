#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, i, j;
	scanf("%d", &n);
	int arr[n], tmp[101];
	for(i=0; i<101; i++)
		tmp[i] = 0;
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
		tmp[arr[i]]++;
	}
	int max = 1;
	for(i=0; i<101; i++)
	{
		if(tmp[i] > max)
			max = tmp[i];
	}
	printf("%d", n - max); 
	return 0;
}