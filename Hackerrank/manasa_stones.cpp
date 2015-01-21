#include <iostream>
#include <algorithm>
typedef long long LL;
using namespace std;

int main()
{

  int T;
  cin>>T;
  while( T-- )
  {

      LL n,a,b;
      cin>>n>>a>>b;

      if( a == b )
        cout<<a*(n-1)<<endl;

      else {
      LL diff = abs(b-a);
      LL x1 = a*(n-1);
      LL x2 = b*(n-1);

      LL  start = min(x1,x2);
      LL end = max(x1,x2);

      for(LL i = start ; i <= end ; i += diff)
        cout<<i<<" ";

      cout<<endl;
    }
  }

  return 0;
}
