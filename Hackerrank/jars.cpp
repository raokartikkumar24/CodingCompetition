#include<iostream>
typedef long long longData;

using namespace std;

int main()
{
	longData M;longData N;
	cin>>N>>M;
	
	
	longData sum = 0;
	while( M-- )
	{
		longData a,b,k;
		cin>>a>>b>>k;
		sum+= k*( b - a + 1);
			
	
	}
	
	
	
	cout<<sum/N<<endl;
}
