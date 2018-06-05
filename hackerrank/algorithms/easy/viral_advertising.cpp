#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, i, receive, like;
	long int total_like;
	scanf("%d", &n);
	receive = 5;
	like = 5/2;
	total_like = 5 / 2;
	for(i=1; i<n; i++)
	{
		receive = like * 3;
		like = receive / 2;
		total_like += receive / 2;
	}
	printf("%ld\n", total_like);
	return 0;
}