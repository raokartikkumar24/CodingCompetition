#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
		int N,T;
		cin>>N>>T;
		vector<int> width(N);
		for(int x = 0 ; x < N ;x++)
			cin>>width[x];
		
		while( T-- )
		{
				int i,j;
				cin>>i>>j;
				int veh = width[i];
				for(;i<=j;i++)
				{
					veh = min(veh,width[i]);
					
				}
				cout<<veh<<endl;
		
		}
		
	return 0;
}