#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	
	int n,m;
	long k;

	cin>>n>>m>>k;

	vector<vector<int> > mat(n+2,vector<int> (m+2));


	long temp = k;
	long count = 0;
	long ans = 0;
	while(temp--)
	{
		count++;
		int p,q;
		cin>>p>>q;

		mat[p][q] = 1;



		if( (mat[p][q] + mat[p-1][q-1] + mat[p-1][q] + mat[p][q-1] == 4) ||
			(mat[p][q] + mat[p-1][q] + mat[p][q+1] + mat[p-1][q+1] == 4) ||
			(mat[p][q] + mat[p][q+1] + mat[p+1][q] + mat[p+1][q+1] == 4) ||
			(mat[p][q] + mat[p][q-1] + mat[p+1][q-1] + mat[p+1][q] == 4))
		{
			if(ans == 0)
				ans = count;
			else
				ans = min(ans,count);
		}


	}


	cout<<ans<<endl;

	return 0;






}