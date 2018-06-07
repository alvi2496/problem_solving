#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, i, j;
    scanf("%ld", &n);
    long ar[n];
    long tmp[100001][2];
    long k;
    for(i=0; i<100001; i++)
    {
        tmp[i][0] = -1;
        tmp[i][1] = -1;
    }
    for(i=0; i<n; i++)
    {
        scanf("%ld", &ar[i]);
        k = ar[i];
        tmp[k][0] >= 0 ? tmp[k][1] = i : tmp[k][0] = i;
        // printf("tmp[%ld][0] = %ld, tmp[%ld][1] = %ld\n", k, tmp[k][0], k, tmp[k][1]);
    }
    int min = 100000;
    for(i=0; i<100001; i++)
    {
        if(tmp[i][1] > 0 && (min > (tmp[i][1] - tmp[i][0])))
            min = tmp[i][1] - tmp[i][0];
    }
    min == 100000 ? printf("-1\n") : printf("%d\n", min);
    return 0;
}
