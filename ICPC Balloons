
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    
    while(t--)
    {
        int n,x=0;
        cin>>n;
        
        string s;
        cin>>s;
        
        set<char> a;
        
        for (i = 0 ; i < n ; i++)
        {
            if (!a.count(s[i]))
            {
                x+=2;
                a.insert(s[i]);
            }
            
            else
            x+=1;
        }
        
        cout<<x<<endl;
    }
    
    return 0;
}

