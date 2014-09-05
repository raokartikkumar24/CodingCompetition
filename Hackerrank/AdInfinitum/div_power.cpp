#include<iostream>
using namespace std;


typedef long long int LL;

LL A[100000] = {0};

LL find(int i, int j)
{
	if( i > j ) return 1;
	LL ans = pow((double)A[i],(double)find(i+1,j));
	return ans;

}

int main()
{
	long N;
	cin>>N;
	for(long i = 1 ; i <= N ;i++)
		cin>>A[i];
	
	long Q;
	cin>>Q;
	while( Q-- )
	{
		long i,j,x;
		cin>>i>>j>>x;
		//cout<<find(i,j)<<endl;
		if( find(i,j)%x == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	
	}
	
	return 0;
}