#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int s, t, a, b, m, n, i;
    scanf("%ld %ld", &s, &t);
    scanf("%ld %ld", &a, &b);
    scanf("%ld %ld", &m, &n);
    long int app[m], ora[n], app_count, ora_count;
    app_count = 0;
    ora_count = 0;
    for(i=0; i<m; i++)
    {
        scanf("%ld", &app[i]);
        if(app[i] > 0 && (a + app[i]) >= s && (a + app[i]) <= t)
            app_count++;
    }
    for(i=0; i<n; i++)
    {
        scanf("%ld", &ora[i]);
        if(ora[i] < 0 && (b + ora[i]) <= t && (b + ora[i]) >= s)
            ora_count++;
    }
    printf("%ld\n%ld\n", app_count, ora_count);
    return 0;
}
