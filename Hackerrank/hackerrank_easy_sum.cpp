#include<iostream>
typedef long long LL;
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while( tc-- )
	{
		LL n,m;
		LL sum = 0;
		cin>>n>>m;
		LL k = n%m;
		LL S = (k*(k+1))/2;
		LL q = n/m;
		LL val = (q*( m*(m-1) ) )/2;
		sum = val + S;
		cout<<sum<<endl;
		
		
		
	}
	
 return 0;

}