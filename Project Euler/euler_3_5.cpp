#include<iostream>
#include<fstream>

using namespace std;
typedef long long ll;
int main()
{
	// int N = 1000;
	// int mthree =0;
	// int mfive = 0;
	// int mthnfive = 0;
	// int sum =0;
	// for(int i = 3 ; i < N ;i++)
	// {
		// if( i % 3 == 0  && i % 5 == 0)
		// {
			// sum += i;
			//if( i % 5 == 0 )
				//sum += i;
		// }
		
		// else if ( i % 5 == 0 ) sum += i;
		// else if ( i % 3 == 0 ) sum += i;
		// else mthnfive++;
	// }
	// cout<<sum<<endl;
	
	ll fib[4000000];
	
	ll N = 4000000;
	//ll x = 0;
	fib[0] = 1;
	fib[1] = 2;
	ll sum = 0;
	 ofstream fibfile;
	 fibfile.open("fib.txt");
	for(ll i = 3 ; i < N ; i++)
	{
		fib[i] = fib[i-1]+fib[i-2];
		fibfile<<fib[i]<<endl;
		if( fib[i] % 2 == 0 ) sum += fib[i];
	}
	
	cout<<sum<<endl;
	
	return 0;
}