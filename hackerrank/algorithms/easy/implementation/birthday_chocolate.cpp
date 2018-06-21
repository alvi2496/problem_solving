#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, m, d;
    scanf("%d", &n);
    int s[n];
    int tmp, count;
    for(i=0; i<n; i++)
        scanf("%d", &s[i]);
    scanf("%d %d", &d, &m);
    count = 0;
    for(i=0; i<n; i++)
    {
        tmp = s[i];
        j = i + m - 1;
        while(j > i)
        {
            tmp += s[j];
            j--;
        }
        if(tmp == d)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
