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
		long N,M;
		cin >> N >> M;

		std::vector<long long> list1;
		std::vector<long long> list2;

		for (int i = 0; i < N; ++i)
		{
			long long ele;
			cin >> ele;
			list1.push_back(ele);
		}

		for (int i = 0; i < M; ++i)
		{
			long long ele;
			cin >> ele;
			list2.push_back(ele);
		}


		std::vector<long long> merged;
		int i = 0, j = 0;
		for(int c = 0; c < N+M; c++ )
		{

			
			if(list1[i] > list2[j] && i < N  )
			{
				merged.push_back(list1[i]);
				i++;
			}

			else if ( i >= N)
				merged.push_back(list2[j++]);
			else if ( j >= M)
				merged.push_back(list1[i++]);
			else 
			{
				if( j < M)
				{
					merged.push_back(list2[j]);
					j++;
				}
			}
		

		}

		for (int i = 0; i < merged.size(); ++i)
		{
			cout << merged[i] << " ";
		}
		cout << endl;
	}

	return 0;
}