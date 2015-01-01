#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int count = 0;
	for(int i = 0; i < input.length() ; i++)
	{
		if( input[i] == input[i+1])
			count++;

	}

	cout<<count<<endl;


	return 0;

}