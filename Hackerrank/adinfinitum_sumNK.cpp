#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

typedef long long LL;
LL modval = 1000000007;


LL getpowers(LL n, int k)
{	
	
		return pow(n,k);

}


void display( LL n , int k )
{
	LL sum = 0;
	cout<<" k : "<<k<<"n : "<<n<<endl;
	for(LL i = 1 ; i <= n ; i++ )
	{
		sum += getpowers(i,k);
		cout<<sum<<endl;
	}
		
	cout<<sum%modval<<endl;
}

int main()
  {
  	int testcases;
  	cin>>testcases;
  	while( testcases --)
      {
		
      	LL N;
		cin>>N;
		int k;
		cin>>k;
		display(N,k);
		
      
    }
  
  return 0;
  
}