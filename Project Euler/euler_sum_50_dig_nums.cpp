#include<iostream>
#include<string>
#include<fstream>
typedef long long longdata;
using namespace std;


int main()
{
	ifstream inputfile( "input.txt" );
	string numbers;
	longdata data[100][50] ;
	longdata sum[150] = {0};
	
	int i = 0;
	while( !inputfile.eof() )
	{
		getline( inputfile,numbers );
		//cout<<numbers<<endl;
		
		for( int j = 0 ; j < 50 ;j++)
			data[i][j] = numbers[j]-'0';
			
		i++;
		
	
	}
	
	longdata counter = 149;
	longdata carry = 0;
	for(int x =49 ; x >=0 ;x--)
	{
	;
		//cout<<"Inside for 1 : "<<endl;
		
		
		
		for(int y = 0; y < 100 ;y++ )
		{
			//cout<<"Inside for 2 : "<<endl;
			//cout<<data[x][y];
			sum[counter] += data[y][x] + carry;
			//cout<<sum[counter]<<endl;
			
		
		}
			cout<<"sum : "<<sum[counter]<<endl;
		
			carry = sum[counter] / 10;
			
			cout<<"Carry : "<<carry<<endl;
			
			sum[counter] %= 10;
			
			cout<<"sum after oer: "<<sum[counter]<<endl;
			
			counter--;
		
	
	}
	
	
	for(int a = 0; a < 150 ; a++ )
	{
	
		cout<<sum[a];
	}
	
	cout<<endl;
	
	
	/*for(int k = 0 ; k < 100 ;k++)
	{
		for(int p = 0 ; p < 50 ;p++)
		  cout<<data[k][p];
	
		cout<<endl;
	}*/
	
	inputfile.close();
	
	return 0;

}
