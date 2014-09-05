#include<iostream>
typedef long long LL;
using namespace std;

int main()
{
	LL N = 100;
	
	LL sumN = 0;
	sumN = (N*(N+1)) /2 ;
	sumN*=sumN;
	
	LL sumSqN = 0;
	
	sumSqN = (N*(N+1)*(2*N + 1) ) /6;
	
	cout<<sumN-sumSqN<<endl;
	
	
	
 

 return 0;
}
