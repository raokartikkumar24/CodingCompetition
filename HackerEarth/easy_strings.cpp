#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	int dashes[] = {6,2,5,5,4,5,6,4,7,6};

	string input;
	cin>>input;

	int length = input.length();
	long long int sum = 0;
	for (int i = 0; i < length; ++i)
	{
		sum += dashes[input[i] -'0'];
	}

	cout<<sum;

	return 0;
}