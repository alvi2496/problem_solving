#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, i, max_count, min_count;
	scanf("%d", &n);
	long int scores[n], min, max;
	min = 100000001;
	max_count = 0;
	min_count = 0;
	max = -1;
	for(i=0; i<n; i++)
	{
		scanf("%ld", &scores[i]);
		if(scores[i] > max)
		{
			max = scores[i];
			max_count++;
		}
		if(scores[i] < min)
		{
			min = scores[i];
			min_count++;
		}
	}
	max_count > 0 ? max_count-- : max_count = max_count;
	min_count > 0 ? min_count-- : min_count = min_count; 
	printf("%d %d\n", max_count, min_count);
	return 0;
}