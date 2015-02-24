#include <iostream>
#include <math.h>
typedef long long LL;

using namespace std;


void solve(LL n)
{
	LL n_n = n;
	LL lastfactor = 0;
	if(n%2 == 0)
	{
		lastfactor = 2;
		n /= 2;
		while( n%2 == 0)
			n /= 2;

	}
	else
		lastfactor = 1;

	LL factor = 3;
	LL maxFactor = (LL)sqrt(n);

	while((n>1) && factor <= maxFactor)
	{
		if(n%factor == 0)
		{
			n /= factor;
			lastfactor = factor;
			while(n%factor == 0)
				n /= factor;
			maxFactor = (LL)sqrt(n);
		}
		factor += 2;
	}

	if(n == 1)
		cout<<lastfactor<<endl;
	else
		cout<<n<<endl;



}



int main()
{
	
	int T;
	cin>>T;

	while( T-- )
	{

		LL N;
		cin>>N;
		solve(N);


	}



	return 0;
}