#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, v1, x2, v2;
    bool s;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    if(x1 < x2 && v2 >= v1)
        s = false;
    else if(x1 > x2 && v1 >= v2)
        s = false;
    else if(x1 == x2 && (v1 > v2 || v1 < v2))
        s = false;
    else
    {
        if((x2 - x1) % (v1 - v2) == 0) {
            s = true;
        }
        else {
            s = false;
        }
    }
    if(s)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
