#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{

	int T;
	cin >> T;

	while (T--)
	{

		int N;
		cin >> N;

		vector<vector<char> > matrix(N, vector<char>(N));

		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				char c; cin >> c;
				matrix[i][j] = c;
			}
		}

		

		/*for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
		cout << matrix[i][j];
		}
		cout << "\n";
		}*/
		if (N == 1)
			cout << "YES \n";
		else {


			for (int i = 0; i < N; i++)
				sort(matrix[i].begin(), matrix[i].end());


			bool ispossible = true;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N - 1; j++)
				{
					ispossible = ispossible & (matrix[j][i] <= matrix[j + 1][i]);
				}
			}

			if (ispossible) cout << "YES \n";
			else cout << "NO \n";
		}

	}



	return 0;
}
