#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

	int T;
	cin >> T;

	while( T -- )
	{
		int N;
		long long  X;
		cin >> N >> X;
		std::vector<long long > array;

		for(int i = 0 ; i < N ; ++i)
		{
			long long n;
			cin >> n;
			array.push_back(n);
		}

		int i =0;
		int j = i+1;
		bool b = false;
		long long sum = 0;
		for (; i < N ; )
		{
			if( sum == X )
			{
				b = true;
				break;
			}

			else if ( sum > X )
			{
				sum = 0;
				i++;
			}

			else
			{
				
				sum += array[i];
				i++;
			}

		}

		if(b) 
			cout << "YES" << endl;
		else
			cout << "NO" << endl;




	}

	return 0;
}