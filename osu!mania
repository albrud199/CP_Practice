#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,a,i,j;
	
	cin>>n;


	while (n--)
	{
		cin>>a;
		char x[500][4];;

		for (i = 0 ; i < a ; i++ )
		{
			for (j = 0 ; j < 4 ; j++ )
			{
				cin>>x[i][j];

			}


		}
		
		for (i = a-1 ; i >= 0 ; i-- )
        {
            for(int j = 3 ; j >= 0 ; j--)
            {
                if(x[i][j]=='#')
                {
                    cout<<j+1<<" ";
                }
            }
        }

		cout<<endl;


	}

	return 0;
}
