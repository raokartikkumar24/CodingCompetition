#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long LL:
using namespace std;

int main()
{

	int T;
	cin >> T;
	
	while( T-- )
	{
		LL N;
		cin >> N;
		bool isprime = false;
		if( N == 0 || N == 2 || N == 3 ) 
		 cout << "Prime \n;
		else if( N == 1 ) cout << "Not prime \n";
		else if( N > 0 )
		{
		
			for(LL j = 2; j <= (LL)sqrt(N) ; j++)
			{
				if( N%j == 0 )
					isprime = true;
			}
			
			if( isprime ) cout << "Not prime \n";
			else cout << "Prime\n";
		
		}
		else
		cout << "Not prime\n";
	}
	return 0;

}