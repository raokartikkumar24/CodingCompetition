#include<iostream>
#include<fstream>
using namespace std;
typedef long long LL;
ofstream primefile;
// LL primetable[20000] = {0};


bool isprime(LL N)
{
	
	
	if( N == 2 ) 
		return true;
	// for( LL j = 3 ; j < N ; j++ ) 
	// {
		LL c = 0;
		LL i = 1;
		for(; i <= N ;i++)
		{
			if( N%i == 0 ) c++;
			/*if( c != 2 &&  i > 1 ) 
			{
			  return false;

			  
			}*/
		
		}
		
		if( c == 2 ) return true;
		
		
		return false;
	
	// }
	
	
	// return true;

}

LL main()
{
	LL NN;
	cin>>NN;
	primefile.open("euler_3_primtfacts.txt");
	// if( isprime(NN) ) cout<<endl<<"Prime"<<endl;
	// else cout<<endl<<"Not prime"<<endl;
	
	// isprime(200000);
	for(LL i = 2 ; i < NN ; i++)
	{
		if( (NN%i) == 0 ) //is a factor
		{
			if(isprime(i))
				primefile<<i<<endl;
		}
	}
	
	
	// cout<<primetable[NN]<<endl;
	primefile.close();
	return 0;

}