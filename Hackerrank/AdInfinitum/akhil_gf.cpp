#include<iostream>
#include<math.h>
typedef long long int LL;
using namespace std;

int main()
{
	long t;
	cin>>t;
	while( t-- )
	{
		LL N,M;
		cin>>N>>M;
		LL sum = 0;
		LL count = 0;
		while( count != N )
		{
			sum = sum + (LL)pow((double)10,count);
			count++;
		
		}
		
		cout<<sum%M<<endl;
	}
	
	return 0;

}