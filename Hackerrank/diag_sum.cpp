#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<vector<int> > mat(N,vector<int>(N));
	for(int i = 0 ; i < N ; i++)
	{
		for(int j = 0 ; j < N ; j++)
		{
			int x;
			cin >> x;
			mat[i][j] = x;
		}
	}

	int diag1 = 0;
	int diag2 = 0;
	for(int i = 0 ; i < N ; i++)
	{
		 for(int j = 0 ; j < N ; j++)
		 {
		 	if( i == j )
		 	 diag1 += mat[i][j];

		 }
		 diag2 += mat[i][(N-1)-i];
	}

	cout << abs(diag1-diag2) << endl;

	return 0;

}