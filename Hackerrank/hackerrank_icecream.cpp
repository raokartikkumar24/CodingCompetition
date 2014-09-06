#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while( t-- )
	{
		int M,N;
		cin>>M;
		cin>>N;
		//map<int,int> store;
		int *array = new int[N];
		for(int i = 0 ; i < N ;i++)
			cin>>array[i];
		
		bool f = false;
		for(int i = 0 ; i < N ;i++)
		{
			for(int j = i+1; j < N ;j++)
			{
				if( array[i]+array[j] == M )
				{
					f = true;
					cout<<i+1<<" "<<j+1<<endl;
					break;
					
					
				}
			}
			if( f ) break;
		}
		
		
		//cout<<endl;
	}
	
	return 0;

}