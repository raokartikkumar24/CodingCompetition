#include <iostream>
#include <vector>
#include <math.h>
typedef long long LL;
using namespace std;

int main()
{

	LL L,S1,S2;
	cin>>L>>S1>>S2;
	LL Q;
	cin>>Q;
	while( Q-- )
	{

		LL q;
		cin>>q;

		double result = sqrt(2*L*L)-sqrt(2*q);
		printf("%.4f",result);

	}


	return 0;
}

