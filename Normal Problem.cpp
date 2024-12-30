
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        for (int i=0; i<s.length(); i++)
        {
            if (s[s.length()-1 -i] == 'p')
            cout<<"q";
            
            else if (s[s.length()-1 -i] == 'q')
            cout<<"p";
            
            else 
            cout <<s[s.length() -1 -i];
        }
        
        cout<<endl;
        
    }
    
    
    

    return 0;
}
