#include <iostream>
#include <vector>
typedef long long LL;
using namespace std;


int main()
{
	
	LL T;
	cin>>T;
	while( T-- )
	{

		LL N;
		cin>>N;
		LL a = 1;
		LL b = 2;
		LL c = 0;
		LL summ = 2;
		for(LL i = 2 ;  ; i++)
		{
			c = a + b;
			if( c < N ) {
			//cout<<c<<endl;
			a = b;
			b = c;
			if(c%2 == 0)
				summ += c;
		}

		else 
			break;

		}


		cout<<summ<<endl;



	}


}

