#include<iostream>
using namespace std;
typedef long long int  LL;
int main()
{

	LL tt;
	cin>>tt;
	while( tt --)
	{
		LL number;
		cin>>number;
		cout<<(number*(number-1))/2<<endl;

	}


	return 0;

}