#include <iostream>
#include <set>
#include <string> 
using namespace std;

int main()
{
	
	int T;
	cin >> T;
	while( T-- )
	{
		int N;
		cin >> N;
		set<string> names;

		for (int i = 0; i < N; ++i)
		{
			string n;
			cin >> n;
			names.insert(n);
		}

		set<string>::iterator it = names.begin();
		for(; it != names.end(); it++)
		{
			cout << *it << endl;
		}
	}
	return 0;
}