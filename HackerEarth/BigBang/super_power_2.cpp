#include<iostream>
typedef long long int LL;
using namespace std;
#define MOD 1000000007
int main()
{
	LL n;
	cin>>n;
	LL *array = new LL[n+1];
	array[0] = 0;
	for(LL i = 1 ; i <= n ; i++)
		cin>>array[i];
	
	LL m;
	cin>>m;
	
	while( m-- )
	{
		int type;
		LL l,r;
		cin>>type>>l>>r;
		int p = 1;
		switch( type ) 
		{
		case 0:
			
			for(LL i = l ; i <= r ;i++ )
			{
				array[i] = array[i]+ ((LL)pow((long double)2,p));
				p++;
			
			}
			break;
		
		case 1:
			LL sum = 0;
			for(LL i = l ; i <= r ;i++ )
			{
				sum += array[i];
			
			}
			cout<<sum<<endl;
		
			break;
		
		}
	}
	
	return 0;
}