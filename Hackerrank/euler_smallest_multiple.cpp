#include <iostream>
typedef long long LL;
using namespace std;

LL gcd(LL a , LL b )
{
	if( b == 0 ) return a;
	else
		return gcd( b , a%b);

}


int main()
{
	LL T;
	cin>>T;
	while( T-- )
	{
		
		LL N;
		cin>>N;
		
		LL lcm = 1;
		for(LL i = 1; i <= N ; i++ )
		{
			lcm = (lcm * i) / gcd(lcm,i);
		}
		
		cout<<lcm<<endl;
	
	}



	return 0;
}