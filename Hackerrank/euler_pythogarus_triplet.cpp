

#include<iostream>
#include<fstream>
#include<map>
using namespace std;
typedef long long LL;
map<LL,LL> triplets;

int main()
{

	int t;
	cin>>t;
	while( t-- )
	{

		int N;
		cin>>N;

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

		cout<<p<<endl;

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

