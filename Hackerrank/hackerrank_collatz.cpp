#include<iostream>
#include<map>
typedef unsigned long long LL;
using namespace std;

int  main()
{
	LL testcases;
	cin>>testcases;
	LL maxcount = 0;
	LL thenumber = 1;
	while( testcases-- )
	{
		LL number;
		cin>>number;
		//LL p[100000] = {0};
		map<int, LL> collatz;
		for(LL i = 1; i <= number; i++ ) {
			LL count = 1;
			LL an = i;
			while( an != 1 )
			{
				if( collatz[an] != 0 ) {
					count = count + collatz[an] - 1;
					break;
				}
				/*if( p[an] != 0 ) {
					count = count+p[an]-1;
					break;
				}*/

				count++;
				if( an%2 == 0 )
					an/=2;
				else an = (3*an) + 1 ;
			}

			collatz[i] = count;
			//p[i] = count;
			if( count >= maxcount )
			{
				maxcount = count;
				if( thenumber < i )
					thenumber = i;
			}

		}
	
	cout<<thenumber<<endl;
	

	}


	return 0;
}

