#include<iostream>
using namespace std;

bool isprime(int n)
{
	return false;
}

int main()
{
	int testcases;
	cin>>testcases;
	while( testcases -- )
	{
		long num;
		cin>>num;
		long sum =0;
		
		
		
		for(int i = 1 ; i < num ;i++)
		{
			if( num%i == 0 )
				sum+=i;
		}
		long sum2 = 0;
		for(int i = 1 ; i < sum ;i++)
		{
			if( sum%i == 0) sum2+=i;
		
		}
		
		if( sum2 == n
		
		cout<<sum<<endl;
	
	}
	
	return 0;

}