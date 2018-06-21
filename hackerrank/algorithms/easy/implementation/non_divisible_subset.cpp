#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, i;
    int k;
    scanf("%ld %d", &n, &k);
    unsigned long long a[n], sum;
    sum = 0;
    for(i=0; i<n; i++)
    {
        scanf("%llu", &a[i]);
        sum += a[i];
    }
    for(i=n-1; i>=0; i--)
    {
        if((sum % k) == 0)
            sum -= a[i];
        else
            break;
    }
    printf("%ld\n", i);
    return 0;
}
