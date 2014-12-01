#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

	int T;
	cin>>T;
	while( T-- )
	{

		long N;
		cin>>N;
		long *v = new long[N];
		

		for (int p = 0; p < N; ++p)
			cin>>v[p];
		
		sort(v,v+N);

		long count = 0;
		int i,j;
		for(i=0;i<N;i++)
		{
			for ( j = i+1; j < N; ++j)
				{
					if(v[i] == v[j] && i != j)
						count++;
				}	
		}

		cout<<count*2<<endl;
		delete [] v;

	}

}