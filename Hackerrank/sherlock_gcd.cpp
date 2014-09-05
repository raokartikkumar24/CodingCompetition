#include<iostream>
using namespace std;


int gcd(int a , int b )
{
	if( b == 0 ) return a;
	else
		return gcd( b , a%b);

}


int main()
{
	int t;
	cin>>t;
	
	while( t-- )
	{
		int N;
		cin>>N;
		int *array = new array[N];
		int result = 0;
		for(int i = 0 ; i < N ;i++)
			cin>>array[i];
		
		for(int i = 0 ; i < N; i++)
		{
			result = gcd(result,array[i]);
		}
		
		if( result == 1 ) cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
		
	}
	
	return 0;

}