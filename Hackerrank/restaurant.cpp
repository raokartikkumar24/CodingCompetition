#include <iostream>
using namespace std;

int gcd(int a , int b )
{
	if( b == 0 ) return a;
	else
		return gcd( b , a%b);

}


int main()
{

	int  T;
	cin>>T;
	while( T-- )
	{
		int a,b;
		cin>>a>>b;
		if(a==b) cout<<1<<endl;
		else
		{
			int x = a / gcd(a,b);
			int y = b / gcd(a,b);
			cout<<x*y<<endl;
		}

	}

	return 0;

}