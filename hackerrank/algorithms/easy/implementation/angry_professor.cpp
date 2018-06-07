#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, i, j, count;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d", &n, &k);
        int st[n];
        for(j=0, count = 0; j<n; j++)
        {
            scanf("%d", &st[i]);
            if(st[i] <= 0)
                count++;
        }
        if(count >= k)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
