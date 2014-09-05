#include<iostream>
using namespace std;
typedef long long LL;

int main()
{
	int testcases;
	cin>>testcases;
	while( testcases-- )
	{
		LL number,num2;
		cin>>number;
		num2 = number;
		int arr[10];
		int count = 0;
		int i = 0;
		while( number > 0 )
		{
			arr[i] = number%10;
			if( arr[i] != 0 )
				if( number % arr[i] == 0 ) 
					count ++;
			number /= 10;
			i++;
		
		}
		
		cout<<count<<endl;
		
	
	}
	
	return 0;
	

}
