#include <bits/stdc++.h>

using namespace std;

long int reverse(long i)
{
	long rev = 0;
	while( i > 0 )
	{
		rev = rev * 10 + (i%10);
		i = i / 10;
	}
	return rev;
}

int main()
{
	long int i, j, k, a, count;
	scanf("%ld %ld %ld", &i, &j, &k);
	count = 0;
	for(a=i; a<=j; a++)
	{
		if( abs(a - reverse(a)) % k == 0 )
			count++;
	}
	printf("%ld\n", count);
	return 0;
}