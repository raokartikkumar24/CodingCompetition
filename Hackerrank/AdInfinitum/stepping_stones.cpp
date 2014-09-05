#include<iostream>
#include<map>
#define MAX 10000000
using namespace std;

typedef long long int LL;

map<LL,LL> store;

void createList()
{
	for(LL i = 1 ; i <= MAX ; i++)
	{
		store.insert(pair<LL,LL>( (i*(i+1))/2, i ));
	}

}

int main()
{
	
	createList();
	
	int t;
	cin>>t;
	
	while( t-- )
	{
		LL N;
		cin>>N;
		if( !store[N] )
			 cout<<"Better Luck Next Time"<<endl;
		else
			cout<<"Go On Bob "<<store[N]<<endl;
		
		
	}
	
	return 0;
}