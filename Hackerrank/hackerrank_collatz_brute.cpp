#include<iostream>

typedef unsigned long long LL;
using namespace std;

int  main()
{
	LL testcases;
	cin>>testcases;
	LL max_seq = 1;
	LL start_num = 0;
	while( testcases-- )
	{
			LL number;
			cin>>number;
			for( LL i = 1; i <= number ; i++)
			{
				LL num = i;
				LL count = 0;
				while( num != 1 )
				{
					
					if(num%2 == 0 ) 
						num = num/2;
					else 
						num = (3*num) + 1;
					
					count++;
					
				}
				
				if( max_seq <= count )
				{
						max_seq = count;
						start_num = i;
				}
			
			}
			
			cout<<start_num<<endl;
	
	}

	return 0;
}

