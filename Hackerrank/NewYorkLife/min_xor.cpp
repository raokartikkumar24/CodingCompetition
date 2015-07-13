#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
typedef long long LL;
using namespace std;

int main()
{
	int size;
	cin >> size;
	std::vector<int> a;
	string s;
	int k;
	for(int i = 0; i < size; ++i)
	{
		int o;
		cin >> o;
		a.push_back(o);
	}

	int size = a.size();
	vector<int> distance(size);
	distance[size-1] = -1;
	int destination = a[a.size()-1];
	int begin = p[0];

	distance[0] = begin ^ destination;

	for(int i = 1 ; i < p.size()-1; ++i)
		distance[i] = (begin ^ p[i] ) + (p[i] ^ destination);


	int ans = distance[0];
	for(int i = 0 ; i < distance.size()-1; ++i)
		ans = min(ans,distance[i]);

	cout << ans << endl;


	return 0;
}