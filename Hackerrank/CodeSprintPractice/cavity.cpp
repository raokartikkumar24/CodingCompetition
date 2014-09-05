#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	
	char **mat;
	mat = new char*[n+2];
	for(int i = 0 ; i < n+2 ; i++)
		mat[i] = new char[n+2];
	

	
		
	for(int i = 0 ; i < n+2;i++)
	{
		for(int j = 0; j < n+2 ; j++)
			mat[i][j] = '0';
	
	}
	
	
	for(int i = 0 ; i < n+2 ;i++)
	{
		for(int j = 0; j < n+2 ; j++)
			cout<<mat[i][j]<<" ";
		
		cout<<endl;
	}
	
	int nn = 1;
	
	while( nn <= n)
	{
		
		int t = 1;
		string line;
		cin>>line;
		
		while( t <= n ) {
				
			mat[nn][t] = line[t];
			t++;
		}
		
		nn++;
	}
	
	
	// for(int i = 1 ; i <= n ;i++) {
		// for(int j = 1; j <= n ; j++) {
			// cout<<mat[i][j]<<" "; }
		// cout<<endl;}
	
	for(int i = 2; i <= n ;i++)
	{
			for(int j = 2; j <= n; j++)
			{
				char a[] = { mat[i+1][j], mat[i-1][j], mat[i][j+1], mat[i][j-1],mat[i][j] };
				if( mat[i][j] == *max_element(a,a+5))
					mat[i][j] = 'X';
			
			}
		
	}
	
	
	for(int i = 1 ; i < n+2 ;i++) {
		for(int j = 1; j < n+2 ; j++) {
			cout<<mat[i][j]; }
		cout<<endl;
		}
	
	return 0;
	
}

