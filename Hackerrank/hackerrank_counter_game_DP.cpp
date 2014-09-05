#include<iostream>
#include<map>
#include<string>
using namespace std;

typedef long long LL;

map<LL,string> memo;

long long smallerPowerOf2(long long v) {
	v--;
	v |= v >> 1;
	v |= v >> 2;
	v |= v >> 4;
	v |= v >> 8;
	v |= v >> 16;
	v++;
	return v >> 1;

}


LL checkMin(LL N)
{
	bool r =false , l = true;
	memo.insert(pair<LL,string>(1,"Louise"));
	
	LL counter = N;
	int i = 1;
	while( counter != 1 )
	{
		if( memo[counter] == " ")
		{
			if( counter & counter-1 != 0 )
			{
				counter -= smallpower(counter);
			}
			else 
				counter/=2
			
			memo[counter] = 
			
			if( counter == 1 ) break;
		}
		else
			cout<<memo[counter]<<endl;
			
	}


}
