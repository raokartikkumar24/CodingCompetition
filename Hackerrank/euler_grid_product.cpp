#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int LL;
using namespace std;

int main()
{
	
	vector<vector<LL> > grid(30,vector<LL>(30));

	for(int i = 0 ; i < 30; i++)
		for(int j = 0; j < 30; j++)
			grid[i][j] = 1;


	for(int i = 3 ; i < 23; i++) {
		for(int j = 3; j < 23; j++) {
			int val;
			cin>>val;
			grid[i][j] = val;
		}
	}


  	LL maxValue = 0 ;

    for(int i = 3 ; i < 23; i++) {
		for(int j = 3; j < 23; j++) {
			maxValue = max((grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3]), maxValue); 
			maxValue = max((grid[i][j] * grid[i][j-1] * grid[i][j-2] * grid[i][j-3]), maxValue);
			maxValue = max((grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j]), maxValue);
			maxValue = max((grid[i][j] * grid[i-1][j] * grid[i-2][j] * grid[i-3][j]), maxValue);
			maxValue = max((grid[i][j] * grid[i-1][j-1] * grid[i-2][j-2] * grid[i-3][j-3]), maxValue);
			maxValue = max((grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3]), maxValue);
			maxValue = max((grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3]), maxValue);
			maxValue = max((grid[i][j] * grid[i+1][j-1] * grid[i+2][j-2] * grid[i+3][j-3]), maxValue);
		}
	}


	cout<<maxValue<<endl;



return 0;



}