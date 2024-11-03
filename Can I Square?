#include <bits/stdc++.h>
using namespace std;

 

bool is_square (long long num)
{
    long long x = sqrt(num);
    return x*x == num;
}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    int t,i;
    cin>>t;
    
    while (t--)
    {
        cin >> n;
        long long x=0;
        
        for (i = 0 ; i< n ;i++)
        {
            int a;
            cin>>a;
            x+=a;
        }
        
        if (is_square(x))
        cout<<"yes"<<endl;
        
        else
        cout<<"no"<<endl;
    }
    
    

    return 0;
}
