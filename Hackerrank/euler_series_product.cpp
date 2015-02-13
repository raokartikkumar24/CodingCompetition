#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;

typedef long long LL;

int main()
{
	
	int T;
	cin>>T;
	while( T-- )
	{

		int K,N;
		string number;
		cin>>N>>K;
		cin>>number;

		LL prod = 0;

		for(int i = 0 ; i < N-K ; i++)
		{
			LL p = 1;
			for(int j = i; j < K+i ;j++)
			{
				p *= number[j]-'0';
			}

			prod = max(prod,p);

		}

		cout<<prod<<endl;


	}


	return 0;
}


