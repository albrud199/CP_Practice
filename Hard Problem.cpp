
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        
        int r1 = min (m,a);
        int r2 = min (m,b);
        
        int total = m*2;
        
        int rem = total - (r1+r2);
        
        int r3 = min(rem,c);
        
        cout<<r1+r3+r2<<endl;
        
        
    }

    return 0;
}
