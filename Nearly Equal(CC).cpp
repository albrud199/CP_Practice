#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,n,m,i,j;
    string a,b;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n>>m;
        cin>>a>>b;
        
        int Hdist = 100;
        
        for (i=0;i<=n-m;i++)
        {
            int dist = 0;
            
            for (j=0;j<m;j++)
            {
                if (a[i+j] != b[j])
                dist++;
                
            }
            if (dist < Hdist)
            Hdist = dist;
        }
        
        cout << Hdist<<endl;
    }

}
