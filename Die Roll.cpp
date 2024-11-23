#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b;
    cin>>a>>b;
    
    if (b>a)
    swap(a,b);
    
    int c = 0;
    for (int i = a ; i<=6 ; i++)
    {
        c++;
    }
    
    int d = c/6;
    
    if (d==1)
    cout <<"1/1";
    
    else
    {
        if (c==0)
        cout<<"0/1";
        
        else if (c==1)
        cout<<"1/6";
        
        else if (c==2)
        cout<<"1/3";
        
        else if (c==3)
        cout<<"1/2";
        
        else if (c==4)
        cout<<"2/3";
        
        else if (c==5)
        cout<<"5/6";
    }
    
 
    return 0;
}
