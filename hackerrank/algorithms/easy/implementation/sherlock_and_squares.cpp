#include <bits/stdc++.h>

using namespace std;

vector<long> square;

void seive()
{
	long i;
	for(i=1; i*i <= 1000000000; i++)
		square.push_back(i*i);
}

int main()
{
	int t, i;
	long a, b, count;
	seive();
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		scanf("%ld %ld", &a, &b);
		count = 0;
		for(vector<long>::iterator n=square.begin(); *n<=b && n!=square.end(); n++)
			if( *n >= a )
				count++;
		printf("%ld\n", count);
	}
	return 0;
}