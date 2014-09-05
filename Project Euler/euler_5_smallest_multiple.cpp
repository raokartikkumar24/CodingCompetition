#include<iostream>
using namespace std;

typedef long long LL;

int main()
{

	LL N = 10;
	
	LL sum = 1;
	
	for(LL i = 1 ; i <=N ;i++)
		sum*=i;
	
	cout<<endl<<sum<<endl;

}