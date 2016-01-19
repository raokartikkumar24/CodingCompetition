#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#ibclude <climits>

using namespace std;


int main() {

	int N;
	cin >> N;

	vector<long> array(N);

	multimap < int, pair<long, long> > themap;

	for (int i = 0; i < N; i++)
		cin >> array[i];

	sort(array.begin(), array.end());


	int mini = INT_MAX;
	vector<pair<long, long> > array_pair;

	for (int i = 0; i < N - 1; i++)
	{
		if (abs(array[i] - array[i + 1]) < mini)
		{
			mini = abs(array[i] - array[i + 1]);
		}
	}

	
	for (int i = 0; i < N - 1; i++)
	{
		if (abs(array[i] - array[i + 1]) == mini)
		{
			pair<long, long> temp;
			temp.first = array[i];
			temp.second = array[i + 1];
			array_pair.push_back(temp);
		}
	}


	for (auto val : array_pair)
		cout << val.first << " " << val.second << " ";

	
	cout << endl;
	return 0;
}
