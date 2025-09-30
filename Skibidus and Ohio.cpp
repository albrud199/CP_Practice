
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,d;
    cin >> t;
    
    
    while(t--)
    {
        c = 0;
        d = 0;
        string s ;
        cin >> s;
        
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s[i+1])
            {
                c = 1;
                break;
            }    
            
            else
            d++;
        }
        
        if (c == 1)
        cout << 1 << endl;
        
        else 
        cout << d << endl;
        
        
    }

    return 0;
}
