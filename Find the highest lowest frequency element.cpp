#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    
    int a[] = {10,5,10,17,10,5};
    n = sizeof(a) / sizeof(a[0]);
    
    
    map <int , int> m ;
    
    int mine = 0; // minimum element
    int maxf = 0; // maximum frequency
    int minf = n; // minimum frequency
    int maxe = 0; // maximum element
    int k, v; // key & value
    
    for (i = 0 ; i < n ; i++)
    {
        m[a[i]]++;
    }
    
    for (auto it : m)
    {
        k = it.first;
        v = it.second;
        
        if (v > maxf)
    {
        maxf = v;
        maxe = k;
        
    }
    
    if (v < minf)
    {
        minf = v;
        mine = k;
    }
    
    
    }
    
        
    cout<<"maxe = "<<maxe<< " mine = "<<mine;

    return 0;
}