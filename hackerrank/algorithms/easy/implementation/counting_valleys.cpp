#include <iostream>
using namespace std;

int main()
{
    unsigned int n; 
    cin>>n;
    cin.ignore();
    char ch;
    int sea_level=0, Ans=0;
    
    while(cin >> ch){ 
        if(ch=='U')
            ++sea_level;
        if(ch=='D')
            --sea_level;
        if(sea_level==0 && ch=='U')
            ++Ans;
        }
    
    cout<<Ans<<endl;
    
    return 0;
}