#include <iostream>
#include <vector>

using namespace std;

int main()
{
	
	
	vector<vector<int> > mat(11, vector<int>(11));

	for(int i = 1; i < 11; i++)
		mat[1][i] = 1;


    for(int i = 1; i < 11; i++)
		mat[i][1] = 1;



	for(int i = 2 ; i < 11 ; i++)
	{

		for(int j = 2 ; j < 11 ; j++)
		{
			mat[i][j] = mat[i-1][j] + mat[i][j-1];

		}
	}


	vector<int> largeNums(11);

	for(int i = 1 ; i < 11; i++)
	{
		for(int j = 1; j < 11 ;j++)
			{
				if( i == j)
					largeNums[i] = mat[i][j];
			}
	}


	int n;
	cin>>n;

	cout<<largeNums[n]<<endl;

	return 0;


}