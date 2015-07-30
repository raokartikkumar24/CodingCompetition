#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin >> T;

	while( T -- )
	{
		int N , M;
		cin >> N >> M ;

		pair<int,int> edges[40001];

		for(int i = 1  ; i <= M ; ++i)
		{
			int a,b;
			cin >> a >> b;
			edges[i].first = a;
			edges[i].second = b;
		}

		set<int> nodes;

		for(int i = 1 ; i < N ; ++i)
		{
			int x;
			cin >> x;
			
			nodes.insert(edges[x].first);
			nodes.insert(edges[x].second);
		}

		if(nodes.size() == N )
			cout << "YES \n";
		else
			cout << "NO \n";

	}

	return 0;
}