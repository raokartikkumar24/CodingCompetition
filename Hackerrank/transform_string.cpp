#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <string>
typedef long long LL;
using namespace std;


int main() {

	string input;
	cin >> input;
	int Q;
	cin >> Q;

	while( Q-- )
	{
		int a,b;
		cin >> a >> b;
		string::iterator s = input.begin() + a;
		string::iterator e = input.begin() + b + 1;
		reverse(s,e);
		//input = newstring;
		cout << input << endl;
	}


	return 0;
}