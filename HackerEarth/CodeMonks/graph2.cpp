#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int E;
		cin >> E;
		
		set<int> ed;
		

		for (int i = 0; i < E; i++)
		{
			int x, y;
			cin >> x >> y;
			ed.insert(x);
			ed.insert(y);
			
		}

		cout << ed.size() << endl;
	}
	return 0;
}