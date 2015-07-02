#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	int T;
	cin >> T;

	while( T-- )
	{
		int N,K;
		cin >> N >> K;
		cout << N-K-2 << endl;
	}

	return 0;
}