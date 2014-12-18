#include<iostream>
using namespace std;

int main()
{
	long T;
	cin>>T;
	
	while( T-- )
	{
		int A,B;
		cin>>A>>B;
		if( A == 0 || B == 0 )
			cout<<0<<endl;
		else {
		int result = A;
		for(int i = A; i <= B ; i++)
			result &= i;
		
		cout<<result<<endl;
		}
	}

	return 0;
}