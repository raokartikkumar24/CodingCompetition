#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector< vector <char > > mat(N, vector<char>(N));



	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			mat[i][j] = '-';

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {

			mat[i][(N - 1) - j] = '#';
		}
	}




	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) 
			{
				if (mat[i][j] == '#')
					cout << mat[i][j];
				else
					cout << " ";
			}
			cout << endl;
		}
	return 0;

}

