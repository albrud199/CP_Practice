#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    string s;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for (i=0;i<n;i++)
    {
        getline(cin,s);
        swap (s[0],s[4]);
        cout<<s<<endl;
    }

    return 0;
}
