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
		long long int product = 1;
		for(long i = 0 ; i < N ;i++)
		{
			cin>>array[i];
			product*=array[i];
		}
		
		if( (Z & product) == 0 )
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	
	}
	
	return 0;
}	