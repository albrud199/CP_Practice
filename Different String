#include <bits/stdc++.h>
using namespace std;


int i,n,a,b;
    
void solve ()
{
        string s;
        cin>>s;
        bool ok = false;
        
        for (a=0;a<s.length();a++)
        {
            if (s[a] != s[0])
            {
                swap(s[a],s[0]);
                ok=true;
                break;
            }
        }
        
        if(!ok)
        {
        cout<<"NO\n"; 
        return ;
        }
        
        cout<<"YES\n";
        cout<<s<<endl;
}

int main()
{
    cin>>n;
    
    for (i=0;i<n;i++)
    {
        solve();
    }
    return 0;
}
 
