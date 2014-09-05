#include<iostream>

using namespace std;

int main()
{
	int N = 10000;
	int x,y;
	int mat[4][16] = {0};
	x =16;
	y = 4;
	for(int i = 0 ; i < x/2 ; i++)
		mat[1][i] = 0;
		
	for(int i = x/2 + 1 ; i < x ; i++)
		mat[i][0] = 0;
		
		
	
	return 0;
}