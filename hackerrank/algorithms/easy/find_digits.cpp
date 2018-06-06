#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, i, count;
	scanf("%d", &t);
	long num, tmp;
	for(i=0; i<t; i++){
		scanf("%ld", &num);
		tmp = num;
		count = 0;
		while(tmp > 0){
			if( (tmp%10 != 0) && (num % (tmp%10) ) == 0 )
				count++;
			tmp = tmp / 10;
		}
		printf("%d\n", count);
	}
	return 0;
}