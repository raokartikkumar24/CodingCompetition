#include <iostream>
#include <set>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while( T-- )
	{
		int N;
		cin >> N;
		set<int> table;
		int count = 0;
		for(int i = 0; i < N ; ++i)
		{
			int num;
			cin >> num;
			if( table.count(num%10) == 0)
				table.insert(num%10);
			else count++;

		}

		cout << count << endl;


	}
	
	return 0;
}