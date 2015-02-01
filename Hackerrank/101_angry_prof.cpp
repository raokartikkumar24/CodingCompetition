#include <iostream>
using namespace std;

int main()
{
	
	int T;
	cin>>T;
	while(T--)
	{

		int N,K;
		cin>>N>>K;
		int stcount = 0;
		for(int i = 0 ; i < N ; i++)
		{
			int temp;
			cin>>temp;
			if( temp <= 0)
				stcount++;
		}

		if(stcount >= K)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}


	return 0;

}