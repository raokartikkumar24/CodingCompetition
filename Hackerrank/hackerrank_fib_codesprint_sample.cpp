#include<iostream>
#include<map>
using namespace std;
typedef long long LL;
#define mod 100000007


LL fibs[1000000] = {0};
map<int,LL> fibo;

int main()
{
	fibs[0] = 0;
	fibs[1] = 1;
	fibs[2] = 1;
	
	fibo.insert(pair<int,LL>(0,0));
	fibo.insert(pair<int,LL>(1,1));
	fibo.insert(pair<int,LL>(2,1));
	
	for( LL i = 3 ; i < 10000000; i++)
	{
		fibo.insert(pair<int,LL>(i,fibo[i-1] + fibo[i-2]));
		fibs[i] = fibs[i-1] + fibs[i-2];
	
	}
	
	int tc;
	cin>>tc;
	
	while( tc-- )
	 {
		LL num;
		cin>>num;
		cout<<fibs[num+1]%mod<<endl;
		cout<<fibo[num+1]%mod<<endl;
	 }
}

