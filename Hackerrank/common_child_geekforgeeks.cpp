#include<iostream>
#include<string>
#include<vector>
using namespace std;
 

 

int LCSubStr(string X,string Y, int m,int n)
{
	long **LCSuff = NULL;
	LCSuff = new long*[m+1];
	
	for(int i = 0 ; i <=n ; i++)
		LCSuff[i] = new long[n+1];
		
	//vector<vector<long>> LCSuff;
   // int LCSuff[100][100];
    long result = 0;  
 
	for( int p = 0 ; p <= n ; p++)
		LCSuff[0][p] =0;
	
	for( int p = 0 ; p <= m ; p++)
		LCSuff[p][0] =0;
	

	for(int i = 0 ; i <=m ; i++)
	{
		for(int j = 0 ; j <=n ; j++)
		{
			cout<<LCSuff[i][j]<<" ";
		}
		cout<<endl;
	}
	
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
			if( (X[i-1] == Y[j-1]) /*&& X[i] != '\0'*/)
			{
				//cout<<i<<" "<<j<<" "<<X[i]<<Y[j]<<"::strings are equal"<<endl;
				if( i == 1 || j == 1 )
					LCSuff[i][j] = 1;
				else
				{
					LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
					result = max(result, LCSuff[i][j]);
				}
			
			
			}
			else
				LCSuff[i][j] = LCSuff[i-1][j-1];
            // if (i == 0 || j == 0)
                // LCSuff[i][j] = 0;
 
            // else if (X[i-1] == Y[j-1])
            // {
                // LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                // result = max(result, LCSuff[i][j]);
            // }
            // else LCSuff[i][j] = 0;
        }
    }
	
	for(int i = 0 ; i <=m ; i++)
	{
		for(int j = 0 ; j <=n ; j++)
		{
			cout<<LCSuff[i][j]<<" ";
		}
		cout<<endl;
	}
	
    return result;
}
 

int main()
{
   
   string X,Y;
   cin>>X>>Y;
   cout<<X<<" "<<Y<<endl;
	cout<<LCSubStr(X,Y,X.length(),Y.length())<<endl;
    // int res =  LCSubStr(X,Y,X.length(),Y.length());
	// if( res != 0 )
		// res +=1;
	// cout<<res<<endl;


    return 0;
	
}