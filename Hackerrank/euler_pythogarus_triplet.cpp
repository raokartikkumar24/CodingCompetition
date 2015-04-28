#include <iostream>
#include <math.h>
#include <map>
using namespace std;
typedef long long LL;
map<LL,LL> triplets;

LL gcd(LL a , LL b )
{
	if( b == 0 ) return a;
	else
		return gcd( b , a%b);

}


void solve(int N)
{

	LL s2 = N/2;
	LL mlimit = (LL)sqrt(s2) - 1;
	int m = 2;
	LL sm= 0,k = 0;
	LL p = -1;
	for (; m < mlimit; ++m)
	{
		if(s2%m == 0)
		{
			sm = s2/2;
			while(sm%2 == 0)
			{
				sm /= 2;
			}

			if(m%2 == 1)
				k = m+2;
			else
				k = m+1;

			while((k < 2*m) && k <= sm)
			{
				if((sm%k == 0) && (gcd(k,m) == 1))
				{
					LL d = s2/(k*m);
					LL n = k-m;
					LL a = d*(m*m-n*n);
					LL b = 2*d*m*n;
					LL c = d*(m*m+n*n);
					//if( a+b+c == N)
						p = a*b*c;
				}

				k = k + 2;
			}

		}
		
	}

	cout<<p<<endl;

}



void brute_force(int n)
{

	LL p = -1;
	for(LL a = 1 ; a <= (n-3)/3; a++)
	{
		for(LL b = a+1 ; b < (n-1-a)/2; b++)
		{
				LL c = n-a-b;
				if(c*c == (a*a) + (b*b))
					p = a*b*c;
		}
	}

	cout<<p<<endl;


}


int main()
{

	int t;
	cin>>t;
	while( t-- )
	{

		int N;
		cin>>N;

		solve(N);

		/*cout<<endl;

		LL a,b,c;
		LL  p = -1;
		for(a = 1; a <= N/3 ; a++)
		{
			LL d = N - a;
			LL e = a * a / d;
			b = (d-e)/2;
			c = (d+e)/2;

				if((a*a + b*b == c*c) && (a + b + c == N ))
					p = a*b*c;

		}

		cout<<p<<endl;*/

	}
		
	/*
		LL a,b,c;
		LL m =2, n;
		
		
		for( m=1; m <= 3000; m++)
		{
			n = m+1;
		
			a = (n*n) - (m*m);
			b = 2*m*n;
			c = (n*n) + (m*m);
			triplets.insert(pair<LL,LL>(a+b+c, a*b*c));


		}
		int testcases;
		cin>>testcases;
		while( testcases-- ) {
	
			LL N;
			cin>>N; 
		
			if( triplets[N] == 0 )
				cout<<-1<<endl;
			else
			cout<<triplets[N]<<endl;
		
		}

		*/



			
	return 0;
		
		

}

