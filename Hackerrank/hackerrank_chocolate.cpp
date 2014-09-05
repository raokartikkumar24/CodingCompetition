#include<iostream>
typedef long long LL;
using namespace std;

int main()
{

	int tc;
	cin>>tc;
	
	while( tc-- )
	{
		LL num;
		cin>>num;
		
		if( num% 2 == 0 )
			cout<<(num/2) * ( num/2 )<<endl;
		else
		   {
				LL q = num /2;
				cout<<q*(num-q)<<endl;
		   }
	
	}
	
	return 0;

}