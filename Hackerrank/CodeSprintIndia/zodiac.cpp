#include<iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	if( N == 1 )
		cout<<"Shaka :)"<<endl;
	else {
	int bits = 0;
	while( N -- )
	{
		int num;
		cin>>num;
		if( num < 0 )
			num += 4294967296;
		int i ;
		for(i = 0 ; num ; num>>=1)
			i+= num&1;
		bits +=i;
	}
	
	if( bits%2 != 0 )
		cout<<"Shaka :)"<<endl;
	else
		cout<<"The other player :("<<endl;
	}	
	return 0;
}