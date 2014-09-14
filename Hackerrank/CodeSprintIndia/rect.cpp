#include<iostream>
typedef long long int LL;
using namespace std;

LL main()
{
	LL t;
	cin>>t;
	while( t-- )
	{
		LL x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		
		LL min1 = min(abs(x2-x),abs(x1-x));
		LL min2 = min(abs(y2-y),abs(y1-y));
		
		cout<<min(min1,min2)<<endl;
		
	
	}

	return 0;
}