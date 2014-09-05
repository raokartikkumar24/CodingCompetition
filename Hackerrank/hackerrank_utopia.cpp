#include<iostream>
typedef long long LL;
using namespace std;

int main()
{
	int testcases;
	cin>>testcases;
	
	while( testcases-- )
	{
		
		LL input;
		LL sum = 1;
		cin>>input;
		for(LL i = 1 ; i <= input; ++i )
		{
			 if( i%2 !=0 )
			 {
				sum *=2;
				
			 
			 }
			 
			 else 
			 {
					sum += 1;
				
			 }
		
		}
		
		cout<<"sum : "<<sum<<endl;
	
	}

	return 0;
}
