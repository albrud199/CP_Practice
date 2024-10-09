#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,l;
    cin>>n>>l;
    
    int a[n];
    
    for (int i = 0 ; i<n; i ++)
    {
        cin>>a[i];
        
    }
    
    sort (a, a+n);
    int d = 0; 
    
    for (int i = 1 ; i<n; i ++)
    {
        int ma = a[i] - a[i-1];
        
        if (ma > d)
        d=ma;
        
    }
    
    double p = d/2.00;
    double a1 = a[0];
    double a2 = l - a[n-1];
    
    double m = max(p,a1);
    
    double f = max(m,a2);
    
    
    cout<<fixed<<setprecision(10)<<f;
 
    return 0;
}
