/**
Count the even number in the given input range at each index
**/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string input;
	cin >> input;

	int l = input.length();
	int evencount = 0;
	vector<int> evens;
	for(int i = 0 ;  i < l ; i++)
	{
		int n = (input[i]-'0');
		if(n%2 == 0) evencount++;
	}

	cout << evencount << " ";

	for(int i = 1 ; i < l ; ++i)
	{
		int n = (input[i-1]-'0');
		if( n%2 == 0)
			evencount--;
		cout << evencount << " ";

	}

	
	return 0;
}