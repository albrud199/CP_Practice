#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int x;
        map<int,ll> mp;
        ll maxi = 0;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            maxi += mp[x-i];
            mp[x-i]++;
        }
        cout<<maxi<<endl;
    }
}

 
