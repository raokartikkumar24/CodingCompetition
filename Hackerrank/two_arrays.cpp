#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long LL;

LL mincompare(LL i, LL j)
{
	return i < j;
}

LL maxcompare(LL i, LL j)
{
	
	return i > j;
}


int main()
{
	
	int T;
	cin>>T;
	while( T-- )
	{

		LL N,K;
		cin>>N>>K;
		vector<LL> A(N);
		vector<LL> B(N);

		for(LL i = 0; i < N ; i++)
		{

			LL t;
			cin>>t;
			A[i] = t;
		}

		for(LL i = 0; i < N ; i++)
		{

			LL t;
			cin>>t;
			B[i] = t;
		}


		sort(A.begin(),A.end(),mincompare);
		sort(B.begin(),B.end(),maxcompare);

		bool f = true;
		for (LL i = 0; i < N; ++i)
		{
			if( A[i] + B[i] < K)
			{
					f = false;
					break;
			}
		}

		if (f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}