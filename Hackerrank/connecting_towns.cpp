#include<iostream>
using namespace std;

#define MOD 1234567

int main()
{
	
	long T;
	cin>>T;
	while(T--)
	{

		long towns;
		cin>>towns;
		long sum  = 1;
		for(long i = 0 ; i < towns-1 ; i++)
		{
			long num;
			cin>>num;
			sum = sum%MOD * num%MOD;
		}

		cout<<sum%MOD<<endl;


	}

}