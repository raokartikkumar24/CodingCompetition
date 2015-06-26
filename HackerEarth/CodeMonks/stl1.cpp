#include <iostream>
#include <set>

using namespace std;

int main()
{
	
	int T;
	cin >> T;
	while( T-- )
	{
		int N,M;
		cin >> N >> M;
		set<long long> _class;
		for(int i = 0 ; i < N ; i++)
		{
			long long n;
			cin >> n;
			_class.insert(n);

		}


		for(int i = 0; i < M ;i++)
		{
			long long m;
			cin >> m;
			if( _class.count(m) == 0 )
			{
				cout << "NO" << endl;
				_class.insert(m);
			}
			else
				cout << "YES" <<endl;
		}
	}
	return 0;
}