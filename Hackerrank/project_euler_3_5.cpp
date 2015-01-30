#include <iostream>
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
    LL n3 = (N-1)/3;
    LL n5 = (N-1)/5;
    LL n15 = (N-1)/15;

    LL sum3 = ((3*n3)*(n3 + 1))/2;
    LL sum5 = ((5*n5)*(n5 + 1))/2;
    LL sum15 = ((15*n15)*(n15+1))/2;

    cout<<sum3+sum5-sum15<<endl;

  }


  return 0;
}
