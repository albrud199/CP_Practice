#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int c0 = 0, c1 = 0, mx = 0;
        
        for (char c : s)
        {
            if (c == '1')
            {
                c1++;
                c0 = 0;
                
            }
            
            else 
            {
                c0++;
            }
            
            mx = max (c0 , mx);
            
        }
        
        cout << c1+mx<<endl;
        
    }
	return 0;
}






