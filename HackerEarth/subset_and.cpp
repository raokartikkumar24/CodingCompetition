#include<iostream>
using namespace std;


int main()
{
	long t;
	cin>>t;
	while( t-- )
	{
		long Z,N;
		cin>>Z>>N;
		long *array = new long[N];
		long long int product = Z;
		for(long i = 0 ; i < N ;i++)
		{
			cin>>array[i];
			product&=array[i];
		}
		
		if( product == 0 )
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
	
	}
	
	return 0;
}	