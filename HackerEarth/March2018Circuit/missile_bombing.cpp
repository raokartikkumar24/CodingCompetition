#include <iostream>

using namespace std;

int Matarray[1002][1002] = {{0}};

void solve(int P, int A, int B, int C , int D) {

	for(int i = A; i <= C; i++) {
		for(int j = B; j <= D; j++) {
			Matarray[i][j] ^= P;
		}
	}
}

void printMatrix(int N) {

	for(int  i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			cout << Matarray[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{

	int N,M,P,A,B,C,D;
	cin >> N;
	cin >> M;

	while(M--) {
		cin >> P >> A >> B >> C >> D;
		solve(P, A, B, C, D);

	}

	printMatrix(N);

	return 0;

}
