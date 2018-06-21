#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n, i, t, count, tmp;
	scanf("%lld %lld", &n, &t);
	long long a[n];
	for(i=0; i<n; i++)
		scanf("%lld", &a[i]);
	sort(a, a + n);
	tmp = 0;
	count = 0;
	for(i=0; i<n; i++)
	{
		tmp += a[i];
		if(tmp <= t)
			count++;
		else
			break;
	}
	printf("%lld\n", count);
	return 0;
}