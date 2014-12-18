#include<iostream>
using namespace std;

int main()
{
	long T;
	cin>>T;
	while( T-- )
	{
		unsigned int val = 0;
		val--;
		unsigned int number;
		cin>>number;
		cout<<(number^val)<<endl;
		
	}
	return 0;
}

