#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long LL;
int main()
{

  LL N,K;
  cin>>N>>K;
  LL sum = 0;
  LL toys = 0;
  vector<LL> ntoys(N);
  for(LL i  = 0; i < N; i++)
  {
    LL nn;
    cin>>nn;
    ntoys[i] = nn;
  }


  sort(ntoys.begin(),ntoys.end());


  for(LL i = 0; i < N ;i++)
  {

      if( sum  <=  K)
      {
          sum += ntoys[i];
          toys++;
      }

  }


  cout<<toys-1<<endl;

  return 0;
}
