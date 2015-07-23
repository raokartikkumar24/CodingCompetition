#include <iostream>
#include <vector>
#include <queue> 
#include <functional>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> notes;
	bool f = false;
	for(int i = 0 ; i < n ; ++i)
	{
		int x;
		cin >> x;
		notes.push_back(x);
		if ( x == 1)
		{
			f = true;
			break;
		}

	}

	if(f) cout << -1 << endl;
	else cout << 1 << endl;

	return 0;
}