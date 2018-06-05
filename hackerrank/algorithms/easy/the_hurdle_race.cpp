#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int h[n];
    int m, i;
    m = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &h[i]);
        if(h[i] > m){
            m = h[i];
        }
    }
    if(m > k)
    {
        printf("%d", m - k);
    }
    else
    {
        printf("0");
    }

    return 0;
}
