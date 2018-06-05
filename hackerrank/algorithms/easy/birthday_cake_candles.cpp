#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, num;
    vector<int> c;
    int i;
    cin >> n;
    for(i=0; i<n; i++ )
    {
        cin >> num;
        c.push_back(num);
    }
    std::sort(c.begin(), c.end());
    t = 0;
    int high = c[c.size()-1];
    for(i=c.size()-1; i>=0; i--)
    {
        if(high == c[i])
            t++;
        else
            break;
    }
    cout << t;
}
