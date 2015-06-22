
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
typedef long long LL;
using namespace std;

int main()
{

	LL N, K;
	cin >> N >> K;

	std::vector<LL> boys;
	std::vector<LL> girls;

	set<pair<LL, LL> > bg;

	for (int x = 0; x < N; x++)
	{
		int nn;
		cin >> nn;
		boys.push_back(nn);
	}

	for (int y = 0; y < N; y++)
	{
		int n;
		cin >> n;
		girls.push_back(n);
	}

	LL i = 0, j = 0;
	LL count = 0;
	cout << "N : " << N << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++) {

			if (abs(boys[i] - girls[j]) <= K)
				bg.insert(pair<LL, LL>(boys[i], girls[j]));

		}

	}

	set<pair<LL,LL> >::iterator iset = bg.begin();

	for (; iset != bg.end(); iset++)
	{
		cout << iset->first << " " << iset->second << endl;
	}

	cout << bg.size() << endl;



	return 0;
}

