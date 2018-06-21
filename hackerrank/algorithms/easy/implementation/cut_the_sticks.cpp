#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, count, min, tmp;
    scanf("%d", &n);
    vector<int> a;
    for(i=0; i<n; i++)
    {
        scanf("%d", &tmp);
        a.push_back(tmp);
    }
    sort(a.begin(), a.begin() + n);
    while(!a.empty())
    {
        min = a.front();
        count = a.size();
        for(auto it=a.begin(); it!=a.end();)
        {
            if(*it == min)
                it = a.erase(it);
            else 
                ++it;
        }
        printf("%d\n", count);
    }
    return 0;
}
