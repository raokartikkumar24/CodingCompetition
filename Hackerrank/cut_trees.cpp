#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while( t -- )
	{
		int N;
		cin>>N;
		int *array = new int[N];
		
		for(int i = 0 ; i < N ;i++)
			cin>>array[i];
		
		int c =0;
		while( true )
		{
			
			int minele = *min_element(array,array+N-c);
			for(int i = 0 ; i < N ;i++)
			{
				if( array[i] > 0 )
				{
					c++;
					array[i] -= minele;
				}
			}
		}
		
	
	}

	return 0;
}