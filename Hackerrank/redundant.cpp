#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

typedef long long LL;
using namespace std;


int main() {

	int N;

	set<LL> db;


	cin >> N;

	while( N-- )
	{
		LL ele;
		cin >> ele;

		if( db.count(ele) != 0 )
		{
				cout << "REDUNDANT" << endl;
		}
		else
		{
			cout << "ADDED" <<endl; 
			db.insert(ele);
		}
	}

    return 0;
}
