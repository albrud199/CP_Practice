#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int t,n,k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        int a = (k-1) / (n-1);
        cout <<k+a<<endl;
    }

    return 0;
}
