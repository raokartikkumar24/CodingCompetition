#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	long count = 0;
	long n;
	cin>>n;
	while ( n-- )
	{
		string operation;
		cin>>operation;

		if(operation[1] == '+')
			count++;
		else
			count--;


	}

	cout<<count<<endl;


	return 0;
}