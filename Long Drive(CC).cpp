#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,a,b,x;
    cin>>n;
    
    while(n--)
    {
        cin >>a>>b;
        
        x =  ceil ((10 * (b-a)) / (100.0 - b) );
        
        cout<<x<<endl;
    }

}
