#include <iostream>
#include <vector>
#include <map>

using namespace std;
vector<int> array;
map<pair<int,int>,int> theset;
int Find(int L, int R)
{
	if(theset.count(pair<int,int>(L,R)) != 0 )
	{
		//cout << "found it!!! \n";
		return theset[pair<int,int>(L,R)];
	}
	else {
	int sum = 0;
	for(int i = L ; i <= R; ++i)
		sum = abs(sum+array[i]);
	pair<int,int> p1(L,R);
	theset.insert(make_pair(p1,sum));
	return sum;
}
}

int main()
{
	
	int N,Q;
	cin >> N >> Q;

	
	for(int i = 0 ; i < N ; ++i)
	{
		int n;
		cin >> n;
		array.push_back(n);
	}

	while(Q--)
	{
		int L,R;
		cin >> L >> R;
		int re = Find(L-1,R-1);
		if(re%2 == 0) cout << "Even \n";
		else cout << "Odd \n";
	}

	return 0;
}