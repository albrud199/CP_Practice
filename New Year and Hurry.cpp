#include <bits/stdc++.h>
using namespace std;


int main()
{
    int i,a = 0,ans =0,n,k, t = 240 , c=0;
    
    cin>> n>>k;
    
        for (i= 1 ; i <= n ; i++)
        {
            
            ans =  5*i;
            k = k + ans;
            if ( k <= t )
            {
                c++;
            }
            
        }

    cout<<c;

    return 0;
}
