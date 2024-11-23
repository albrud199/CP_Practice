#include <iostream>
using namespace std;

int main()
{
    int x,y,a,b,i;
    cin>>i;
    
    while(i--)
    {
        cin>>a;
        x = a/10;
        y = a%10;
        
        a = x+y;
        
        cout<<a<<endl;
        
    }
    
    return 0;
}
