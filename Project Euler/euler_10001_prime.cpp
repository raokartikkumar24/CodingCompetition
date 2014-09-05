#include<iostream>
#include<fstream>
using namespace std;


long primetable[20000] = {0};


void isprime(long N)
{
	ofstream primefile;
	primefile.open("primeNumbers.txt");
	
	
	long count = 2;
	for( long j = 3 ; j < N ; j++ ) 
	{
		long c = 0;
		long i = 1;
		for(; i <= j ;i++)
		{
			if( j%i == 0 ) c++;
		
		}
		
		
		if( c == 2 ) 
		{
		  primetable[count] = j;
		  primefile<<j<<endl;
		  count++;
		  
		}
	
	}
	
	primefile.close();
	// return true;

}

long main()
{
	long NN;
	cin>>NN;
	primetable[1] = 2;
	// if( isprime(NN) ) cout<<endl<<"Prime"<<endl;
	// else cout<<endl<<"Not prime"<<endl;
	isprime(200000);
	
	
	
	cout<<primetable[NN]<<endl;
	
	return 0;

}