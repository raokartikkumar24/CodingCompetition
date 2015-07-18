/**
Cards( 1..N ), faced down, arranged in a circular manner. If card i is tapped, i , i+1 and i-1 cards gets flipped( up->down and vice versa)
To find the minimum number of taps required to make the cards face up
**/

#include <iostream>
using namespace std;

int main()
{
	
	int T;
	cin >> T;

	while( T-- )
	{
		long long int N;
		cin >> N;
		if( N == 0 ) cout << 0 << endl;
		else if( N == 1 || N == 2 || N == 3 ) cout << 1 << endl;
		else if( N%3 == 0 ) cout << N/2 << endl;
		else cout << N << endl;
	}

	return 0;
}