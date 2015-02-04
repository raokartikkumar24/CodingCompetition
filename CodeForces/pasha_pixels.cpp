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


	for (int i = 0; i < n+2; ++i)
		mat[i][0] = -4;
	


	for (int i = 0; i < n+2; ++i)
		mat[i][m+1] = -4;
	

	for (int i = 0; i < m+2; ++i)
		mat[0][i] = -4;
	

	for (int i = 0; i < m+2; ++i)
		mat[n+1][i] = -4;
	


	/*for (int i = 0; i < n+2; ++i)
	{
		for (int j = 0; j < m+2; ++j)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}*/


	long temp = k;
	long count = 0;
	long ans = 0;
	while(temp--)
	{
		count++;
		int p,q;
		cin>>p>>q;

		mat[p][q] = 1;

		if((mat[p-1][q-1] + mat[p-1][q] + mat[p][q-1] + mat[p][q] == 4) ||
		  (mat[p][q] + mat[p][q+1] + mat[p-1][q] + mat[p+1][q+1] == 4) ||
		  (mat[p][q] + mat[p][q-1] + mat[p+1][q] + mat[p+1][q-1] == 4) ||
		  (mat[p][q] + mat[p][q+1] + mat[p+1][q] + mat[p+1][q+1] == 4))
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