/***
*
* Counting Lattice paths in a nXn grid

***/
#include <iostream>

typedef long long int;

int main()
{
	
	int n;
	cin>>n;

	LL result = 0;
	for(LL i = 1 i <= n ; i++)
	{
		result = result*(n+i)/i;
	}

	cout<<result<<endl;


	return 0;

}