#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    
    vector<int> a(n);
    vector<int> b(n-1);
    vector<int> c(n-2);
    
    for(int i = 0 ; i < n ; i++)
    cin>>a[i];
    
    sort(a.begin(),a.end());
    
    for(int i = 0 ; i < n-1 ; i++)
    cin>>b[i];
    
    sort(b.begin(),b.end());
    
    
    for(int i = 0 ; i < n-2 ; i++)
    cin>>c[i];
    
    sort(c.begin(),c.end());
    
    for(int i = 0 ; i < n ; i++)
    {
        if (a[i]!= b[i])
        {
            cout<<a[i]<<endl; break;
        }
    }
    
    for(int i = 0 ; i < n ; i++)
    {
        if (b[i]!= c[i])
        {
            cout<<b[i]<<endl; break;
        }
        
    } 
 
 
    return 0;
}
