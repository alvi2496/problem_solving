#include <bits/stdc++.h>

using namespace std;

int main()
{
	long n;
	int i,j,k;
	scanf("%ld", &n);
	int arr[n], cs[100];
	for(i=0; i<100; i++)
		cs[i] = 0;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		cs[arr[i]]++;
	}
	for(i=0; i<100; i++)
	{
		for(j=0; j<cs[i]; j++)
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}