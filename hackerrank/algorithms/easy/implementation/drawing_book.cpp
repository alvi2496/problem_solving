#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, p ,t; 
    scanf("%ld", &n);
    scanf("%ld", &p);
    long f, l, m;
    if(p == 1 || p == n)
        t = 0;
    else if(p == (n-1) && n%2 == 0)
        t = 1;
    else if(p == (n-1) && n%2 != 0)
        t = 0;
    else
    {
        m = n / 2;
        f = 1;
        n%2 == 0 ? l = 1 : l = 2;
        if(p <= m){
            printf("p = %ld, f = %ld", p,f);
            t = ceil((p - f) / 2);
        }
        else
            t = ceil((p - m - l) / 2);
    }
    printf("%ld\n", t);
    return 0;
}
