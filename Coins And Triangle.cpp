#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,ans,i;
	cin>>t;
	
	while(t--)
	{
	    ans = 0;
	    int n;
	    cin>>n;
	    int sum = 0,s = 0;
	    
	    while (n--)
	    {
	        sum+=s;
	        s++;
	        
	        if (sum <= n)
	        ans++; 
	        
	        else 
	        break; 
	        
	    }

	    cout<<ans <<endl;
	}

}
