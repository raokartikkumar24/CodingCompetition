#include<iostream>
#include<algorithm>
using namespace std;

typedef long long LL;
LL modval = 1000000007;


int main()
  {
  	int testcases;
  	cin>>testcases;
  	while( testcases --)
      {
      	LL N;
      	cin>>N;
		cout<<(N*N)%modval<<endl;
		
      
    }
  
  return 0;
  
}